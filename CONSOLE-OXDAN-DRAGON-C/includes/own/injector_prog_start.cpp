#include <windows.h>
#include <iostream>
#include <conio.h>
#include <string>
#include <shlobj_core.h>
#include <tlhelp32.h>
#include <boost/algorithm/string.hpp>
#include "all_diclarations.h"

#pragma warning(disable : 4996).

using namespace std;

int InjectDLL(DWORD, char*);
int getDLLpath(char*);
int getPID(int*);
int getProc(HANDLE*, DWORD);

int getDLLpath(char* dll)
{
	cout << "\n\033[0;31mEnter 'esc' (for exit)\033[0;37m";
	cout << "\n\033[0;33mEnter path to DLL file: \033[0;37m";
	cin >> dll;
	std::string str = dll;
	boost::to_lower(str);
	boost::trim(str);
	if (str == "esc")
	{
		check_start_start();
	}
	return 1;
}

int getPID(int* PID)
{
	cout << "\n\033[0;31mEnter 'esc' (for exit)\033[0;37m";
	cout << "\n\033[0;33mEnter PID to target process: \033[0;37m";
	cin >> *PID;
	std::string str = std::to_string(*PID);
	boost::to_lower(str);
	boost::trim(str);
	if (str == "esc")
	{
		check_start_start();
	}
	return 1;
}

int getProc(HANDLE* handleToProc, DWORD pid)
{
	*handleToProc = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);
	DWORD dwLastError = GetLastError();

	if (*handleToProc == NULL)
	{
		printf("\033[0;31m\n(!ERROR!)\033[0;37m = \033[0;32m(!Unable to open process!)\n\033[0;37m");
		printf("(!DEBUG!) = GetLastError() = %lu\n", dwLastError);

		switch (dwLastError) {
		case 5:
			printf("\033[0;33m(!HINT!) = Access Denied — Process is likely protected (VAC / SYSTEM)\033[0m\n");
			break;
		case 87:
			printf("\033[0;33m(!HINT!) = Invalid Parameter — Bad PID or NULL handle\033[0m\n");
			break;
		default:
			printf("\033[0;33m(!HINT!) = Unknown error, check protection layers\033[0m\n");
			break;
		}

		_getch();
		cin.clear();
		check_start_start();
		return -1;
	}

	printf("\033[0;32m\n(!SUCCESS!)\033[0;37m = \033[0;33m(!Process opened successfully!)\n\033[0;37m");
	return 1;
}


int InjectDLL(DWORD PID, char* dll)
{
	HANDLE handleToProc;
	LPVOID LoadLibAddr;
	LPVOID baseAddr;
	HANDLE remThread;

	int dllLength = strlen(dll) + 1;

	if (getProc(&handleToProc, PID) < 0)
		return -1;

	LoadLibAddr = (LPVOID)GetProcAddress(GetModuleHandleA("kernel32.dll"), "LoadLibraryA");

	if (!LoadLibAddr)
		return -1;

	baseAddr = VirtualAllocEx(handleToProc, NULL, dllLength, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);

	if (!baseAddr)
		return -1;

	if (!WriteProcessMemory(handleToProc, baseAddr, dll, dllLength, NULL))
		return -1;

	remThread = CreateRemoteThread(handleToProc, NULL, NULL, (LPTHREAD_START_ROUTINE)LoadLibAddr, baseAddr, 0, NULL);

	if (!remThread)
		return -1;

	WaitForSingleObject(remThread, INFINITE);

	VirtualFreeEx(handleToProc, baseAddr, dllLength, MEM_RELEASE);

	if (CloseHandle(remThread) == 0)
	{
		printf("\033[0;31m");
		printf("\n");
		printf("(!ERROR!)");
		printf("\033[0;37m");
		printf(" = ");
		printf("\033[0;32m");
		printf("(!Failed to close handle to remote thread!)\n");
		printf("\033[0;37m");
		cin.clear();
		getch();
		check_start_start();

		return -1;
	}

	if (CloseHandle(handleToProc) == 0)
	{
		printf("\033[0;31m");
		printf("\n");
		printf("(!ERROR!)");
		printf("\033[0;37m");
		printf(" = ");
		printf("\033[0;32m");
		printf("(!Falied to close handle to target process!)\n");
		printf("\033[0;37m");
		cin.clear();
		getch();
		check_start_start();

		return -1;
	}

}

void start_as_admin() {

	MessageBoxA(NULL, "Admin privileges are required.\nThe program will restart as Administrator.", "Elevation Required", MB_OK);
	string cmd;
	//cmd += buf143;
	cmd += oxdan_dragon_c + "\\CONSOLE-OXDAN-DRAGON-C++.exe";

	//printf(cmd.c_str());

	const char* ref = cmd.c_str();

	ShellExecuteA(NULL, "runas", ref, NULL, NULL, SW_SHOW);

	exit(0);
}

DWORD FindProcessByName(const std::wstring& name)
{
	PROCESSENTRY32W entry;
	entry.dwSize = sizeof(PROCESSENTRY32W);
	HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);

	if (Process32FirstW(snapshot, &entry)) {
		do {
			if (_wcsicmp(entry.szExeFile, name.c_str()) == 0) {
				CloseHandle(snapshot);
				return entry.th32ProcessID;
			}
		} while (Process32NextW(snapshot, &entry));
	}
	CloseHandle(snapshot);
	return 0;
}

void inject_prog_start()
{
	if (!IsUserAnAdmin())
	{
		start_as_admin();
	}
	else
	{
		int PID = -1;
		char* dll = new char[255];

		getDLLpath(dll);
		getPID(&PID);

		std::cout << "\n\033[1;34m[>] Trying direct injection into target process...\033[0m\n";

		if (InjectDLL(PID, dll) == -1)
		{
			std::cout << "\n\033[1;31m[-] Direct injection failed!\033[0m\n";
			std::cout << "\n\033[1;34m[>] Trying fallback: injection into trusted process (explorer.exe)...\033[0m\n";

			DWORD trustedPID = FindProcessByName(L"explorer.exe");
			if (trustedPID == 0)
			{
				std::cout << "\n\033[1;31m[-] Could not find explorer.exe\033[0m\n";
			}
			else
			{
				if (InjectDLL(trustedPID, dll) == -1)
				{
					std::cout << "\n\033[1;31m[-] Trusted process injection also failed!\033[0m\n";
					std::cout << "\033[1;33m[!] This process may be protected by kernel-mode anti-cheat (VAC).\033[0m\n";
					std::cout << "\033[1;33m[!] Consider using a kernel-mode driver injector.\033[0m\n";
				}
				else
				{
					std::cout << "\n\033[1;32m[+] Injection into explorer.exe succeeded!\033[0m\n";
				}
			}
		}
		else
		{
			std::cout << "\n\033[1;32m[+] Injection into target process succeeded!\033[0m\n";
		}

		check_start_start(); // return to menu or restart
	}
}
