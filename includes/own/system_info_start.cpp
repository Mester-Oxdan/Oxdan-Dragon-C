#include <windows.h>
#include <shlobj_core.h>
#include "all_diclarations.h"
#include <conio.h>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <iterator>
#include <cstdlib>
#include <cstdio>
#include <memory>
#include <stdexcept>
#include <array>

// Include the necessary Boost headers
#include <boost/property_tree/json_parser.hpp>
#include <boost/property_tree/ptree.hpp>

void system_info_start()
{
	if (IsUserAnAdmin() == true)
	{
		printf("\n");
		printf("You are: 'Super User/Admin' ");
		Sleep(10);
	}

	else if (IsUserAnAdmin() == false)
	{
		printf("\n");
		printf("You are: 'User' \n");
		Sleep(10);
	}
	printf("Language: English \n");
	Sleep(10);

	#ifdef linux

	printf("System: Linux \n");
	Sleep(10);
	
	#endif

	#ifdef _WIN32

	printf("System: Windows \n");
	Sleep(10);

	#else

	printf("System: Windows \n");
	Sleep(10);

	#endif

	char szPath[128] = "";
	WSADATA wsaData;
	WSAStartup(MAKEWORD(2, 2), &wsaData);
	gethostname(szPath, sizeof(szPath));
	printf("Hostname: ");
	printf("%s", szPath);
	Sleep(10);
	printf("\n");
	WSACleanup();

	WSADATA wsa;
	char hostname[128];
	char* IP;

	if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0)
	{
		printf("\033[0;31m");
		printf("\n");
		printf("(!ERROR!)");
		printf("\033[0;37m");
		printf(" = ");
		printf("\033[0;32m");
		printf("(!Error Code: %d ", WSAGetLastError(), "!)\n");
		printf("\033[0;37m");
		_getch();
		1;
	}

	if (gethostname(hostname, sizeof(hostname)) == SOCKET_ERROR)
	{

		printf("\033[0;31m");
		printf("\n");
		printf("(!ERROR!)");
		printf("\033[0;37m");
		printf(" = ");
		printf("\033[0;32m");
		printf("(!Error: %d", WSAGetLastError(), "!)\n");
		printf("\033[0;37m");
		_getch();

		1;
	}

	struct hostent* he;
	struct in_addr** addr_list;

	if ((he = gethostbyname(hostname)) == NULL)
	{
		printf("\033[0;31m");
		printf("\n");
		printf("(!ERROR!)");
		printf("\033[0;37m");
		printf(" = ");
		printf("\033[0;32m");
		printf("(!get host by name failed: %d ", WSAGetLastError(), "!)\n");
		printf("\033[0;37m");
		_getch();

		1;
	}

	addr_list = (struct in_addr**)he->h_addr_list;

	int i = 0; addr_list[i] != NULL;
	IP = inet_ntoa(*addr_list[i]);
	printf("IPv4 Address: %s\n", IP);

	WSACleanup();

	string url = "http://ip-api.com/json/"; // http://ip-api.com/json/
	string response;

	try {
		// Use the C++ standard library to make a HTTP GET request
		array<char, 128> buffer;
		string command = "curl -s " + url;
		unique_ptr<FILE, decltype(&_pclose)> pipe(_popen(command.c_str(), "r"), _pclose);
		if (!pipe) {
			throw runtime_error("popen() failed!");
		}

		while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) {
			response += buffer.data();
		}

	}
	catch (const exception& e) {
		cerr << "Error: " << e.what() << endl;
	}

	// Parse the JSON response using Boost.PropertyTree
	boost::property_tree::ptree pt;
	istringstream is(response);
	read_json(is, pt);

	string query = pt.get<string>("query");

	cout << "Network Ip Address: \033[0;37m" << query << endl;

	WSACleanup();

	#ifdef linux

	printf("Version: 1.2023 [ENGLISH] (C/C++) [LINUX] \n");
	Sleep(10);

	#endif

	#ifdef _WIN32

	printf("Version: 1.2023 [ENGLISH] (C/C++) [WINDOWS] \n");
	Sleep(10);

	#else

	printf("Version: 1.2023 [ENGLISH] (C/C++) [WINDOWS] \n");
	Sleep(10);

	#endif

	check_start_start();
}