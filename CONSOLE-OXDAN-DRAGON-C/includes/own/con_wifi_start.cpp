#include <windows.h>
#include <iostream>
#include <shlobj_core.h>
#include <time.h>
#include "all_diclarations.h"

using namespace std;

void con_wifi_start()
{
	string cmd_4 = "/includes/own/test_python_py_con_wifi.py";
	string cmd_44 = "start " + oxdan_dragon_c + cmd_4;
	system(cmd_44.c_str());
}