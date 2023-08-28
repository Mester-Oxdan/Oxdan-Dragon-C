#include <windows.h>
#include <conio.h>
#include <iostream>
#include <fstream>
#include <chrono>

#define OXIDAN_MAIN

#include "includes/own/all_diclarations.h"

#pragma warning(disable : 4996).

using namespace std;

char buf_87[256];

int main()
{
	int nlen = GetCurrentDirectoryA(255, buf_87);
	SetEnvironmentVariableA("OXDAN-DRAGON-C", buf_87);
	oxdan_dragon_c = "";//std::getenv("OXDAN-DRAGON-C");
	//printf(oxdan_dragon_c.c_str());
	//getch();
	std::fstream txt_yes_no(oxdan_dragon_c + "includes\\own\\resuorces\\all_txt\\txt_yes_no.txt", ios::out | ios::trunc); //open in constructor
	std::string data("true");
	txt_yes_no << data << endl;

	first_start();
}