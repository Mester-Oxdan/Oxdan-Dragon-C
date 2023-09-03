#include <windows.h>
#include <conio.h>
#include <iostream>
#include <fstream>
#include <chrono>
#include <string>
#include <string.h>

#define OXIDAN_MAIN

#include "includes/own/all_diclarations.h"

#pragma warning(disable : 4996).

using namespace std;

char buf_87[256];
char buf2[256];

int main()
{
	int nlen = GetCurrentDirectoryA(255, buf_87);
	SetEnvironmentVariableA("OXDAN-DRAGON-C", buf_87);
	int nchar = GetEnvironmentVariableA("OXDAN-DRAGON-C", buf2, 256);
	oxdan_dragon_c = buf2;
	//cout << oxdan_dragon_c;
	//getch();
	//cout << oxdan_dragon_c + "\\includes\\own\\resuorces\\all_txt\\txt_yes_no.txt";
	//_getch();
	//printf(oxdan_dragon_c.c_str());
	//getch();
	std::fstream txt_yes_no(oxdan_dragon_c + "\\includes\\own\\resuorces\\all_txt\\txt_yes_no.txt", ios::out | ios::trunc); //open in constructor
	std::string data("true");
	txt_yes_no << data << endl;

	first_start();
}