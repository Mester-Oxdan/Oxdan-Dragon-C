#include <windows.h>
#include <string>
//#include <boost/filesystem.hpp>
//#include <boost/process.hpp>
#include "all_diclarations.h"

using namespace std;
//namespace bp = boost::process;

void installs_start(string name)
{
	
	if (name == "python-3.10.6")
	{
		string cmdhg = "start " + oxdan_dragon_c + "\\includes\\own\\includes\\installs\\python-3.10.6-amd64.exe";
		system(cmdhg.c_str());
	}
	else if (name == "nmap-7.94-setup")
	{
		string cmdhg_7 = "start " + oxdan_dragon_c + "\\includes\\own\\includes\\installs\\nmap-7.94-setup.exe";
		system(cmdhg_7.c_str());
	}
	else if (name == "git")
	{
		//boost::filesystem::path cur_path(boost::filesystem::current_path());
		//printf("Hello git \n");
		//printf(cur_path.string().c_str());

		//boost::filesystem::path cmd_path = cur_path / "includes" / "own" / "includes" / "installs" / "Git-2.37.2.2-64-bit.exe";
		//printf("\n cmd: \n");
		//printf(cmd_path.string().c_str());
		//printf("\n");
		//bp::system(cmd_path);

		string cmdhg_10 = "start " + oxdan_dragon_c + "\\includes\\own\\includes\\installs\\Git-2.37.2.2-64-bit.exe";
		//printf(cmdhg_10.c_str());
		//printf("\n");
		system(cmdhg_10.c_str());
	}
	else if (name == "miniconda3")
	{
		string cmdhg_9 = "start " + oxdan_dragon_c + "\\includes\\own\\includes\\installs\\Miniconda3-latest-Windows-x86_64.exe";
		//system(cmdhg_9.c_str());
	}
}