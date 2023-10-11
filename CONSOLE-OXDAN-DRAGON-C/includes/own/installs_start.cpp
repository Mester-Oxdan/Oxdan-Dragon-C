#include <windows.h>
#include <string>
#include "all_diclarations.h"

using namespace std;

void installs_start(string name)
{

	if (name == "python-3.10.6")
	{
		string cmdhg = oxdan_dragon_c + "\\includes\\own\\includes\\installs\\python-3.10.6-amd64.exe";
		system(cmdhg.c_str());
	}
	else if (name == "nmap-7.94-setup")
	{
		string cmdhg_7 = oxdan_dragon_c + "\\includes\\own\\includes\\installs\\nmap-7.94-setup.exe";
		system(cmdhg_7.c_str());
	}
	else if (name == "git")
	{
		string cmdhg_10 = oxdan_dragon_c + "\\includes\\own\\includes\\installs\\Git-2.37.2.2-64-bit.exe";
		system(cmdhg_10.c_str());
	}
	else if (name == "miniconda3")
	{
		string cmdhg_9 = oxdan_dragon_c + "\\includes\\own\\includes\\installs\\Miniconda3-latest-Windows-x86_64.exe";
		system(cmdhg_9.c_str());
	}
}