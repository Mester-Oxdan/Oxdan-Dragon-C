#include <windows.h>
#include <conio.h>
#include <iostream>
#include <fstream>
#include <chrono>
#include "includes/own/all_diclarations.h"

#pragma warning(disable : 4996).

using namespace std;

char buf_87[256];



int main()
{
	int nlen = GetCurrentDirectoryA(255, buf_87);
	SetEnvironmentVariableA("CURRENT_PATH_TO_START", buf_87);
	std::fstream txt_yes_no("resuorces\\all_txt\\txt_yes_no.txt", ios::out | ios::trunc); //open in constructor
	std::string data("true");
	txt_yes_no << data << endl;

	first_start();
}