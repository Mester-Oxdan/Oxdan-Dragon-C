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

bool containsSpaces_2(const string& str) {
	return str.find(' ') != string::npos;
}

int main()
{
	int nlen = GetCurrentDirectoryA(255, buf_87);
	SetEnvironmentVariableA("OXDAN-DRAGON-C", buf_87);
	int nchar = GetEnvironmentVariableA("OXDAN-DRAGON-C", buf2, 256);
	oxdan_dragon_c = buf2;
	//cout << "pt 1: oxidan_dragpn_c =" << oxdan_dragon_c << endl;
	//getch();
	//cout << oxdan_dragon_c;
	//getch();
	//cout << oxdan_dragon_c + "\\includes\\own\\resuorces\\all_txt\\txt_yes_no.txt";
	//_getch();
	//printf(oxdan_dragon_c.c_str());
	//getch();
	string filePath = oxdan_dragon_c;
	vector<string> directories;

	// Split the path into directories and add them to the list
	size_t start = 0, end;
	while ((end = filePath.find("\\", start)) != string::npos) {
		string dir = filePath.substr(start, end - start);
		directories.push_back(dir);
		start = end + 1;
	}
	string lastComponent = filePath.substr(start);
	directories.push_back(lastComponent);

	// Keep track of the first and last words with spaces
	string firstSpaceWord;
	string lastSpaceWord;

	// Print the list of directories and detect first/last words with spaces
	//cout << "Original Path: " << filePath << endl;
	//cout << "List: ";
	for (const string& dir : directories) {
		//cout << "\"" << dir << "\" ";

		if (containsSpaces_2(dir)) {
			if (firstSpaceWord.empty()) {
				firstSpaceWord = dir;
			}
			lastSpaceWord = dir;
		}
	}
	//cout << endl;

	// Print the first and last words with spaces
	if (!firstSpaceWord.empty()) {
		//cout << "First word with spaces: " << firstSpaceWord << endl;
		//cout << "Last word with spaces: " << lastSpaceWord << endl;

		if (firstSpaceWord == lastSpaceWord)
		{

			// Replace spaces within the first and last words with double quotes
			size_t startPos = filePath.find(firstSpaceWord);
			size_t endPos = startPos + firstSpaceWord.length();
			string modifiedPath = filePath.substr(0, startPos) + "\"" + firstSpaceWord + filePath.substr(endPos);

			startPos = modifiedPath.find(lastSpaceWord);
			endPos = startPos + lastSpaceWord.length();
			modifiedPath = modifiedPath.substr(0, startPos) + lastSpaceWord + "\"" + modifiedPath.substr(endPos);


			// Print the modified path
			//cout << "Modified Path: " << modifiedPath << endl;
			string cmd_cmd = "start ";
			cmd_cmd += modifiedPath;
			system(cmd_cmd.c_str());
		}
		else
		{
			// Replace spaces within the first and last words with double quotes
			size_t startPos = filePath.find(firstSpaceWord);
			size_t endPos = startPos + firstSpaceWord.length();
			string modifiedPath = filePath.substr(0, startPos) + "\"" + firstSpaceWord + "\"" + filePath.substr(endPos);

			startPos = modifiedPath.find(lastSpaceWord);
			endPos = startPos + lastSpaceWord.length();
			modifiedPath = modifiedPath.substr(0, startPos) + "\"" + lastSpaceWord + "\"" + modifiedPath.substr(endPos);


			// Print the modified path
			//cout << "Modified Path: " << modifiedPath << endl;
			//string cmd_cmd = "start ";
			//cmd_cmd += modifiedPath;
			//system(cmd_cmd.c_str());

			oxdan_dragon_c = modifiedPath;

			std::fstream txt_yes_no(modifiedPath + "\\includes\\own\\resuorces\\all_txt\\txt_yes_no.txt", ios::out | ios::trunc); //open in constructor
			std::string data("true");
			txt_yes_no << data << endl;

			first_start();
		}
	}
	else {
		//cout << "No words with spaces found." << endl;
	}
	oxdan_dragon_c = filePath;
	//cout << "pt 2: oxidan_dragpn_c =" << oxdan_dragon_c << endl;
	//_getch();
	//string cmd_3 = "/includes/own/test_python_py_doom.py";
	//string cmd_33 = "start " + oxdan_dragon_c + cmd_3;
	//string cmd_33 = "C:\\Users\\bogda\\Downloads\\"Oxdan-Dragon-C - Copy\\test jy"\\CONSOLE - OXDAN - DRAGON - C\\CONSOLE - OXDAN - DRAGON - C++.exe";
	//cout << "pt 3: cmd_33= " << cmd_33 << endl;
	//_getch();
	//system(filePath.c_str());
	//check_start_start();
	std::fstream txt_yes_no(filePath + "\\includes\\own\\resuorces\\all_txt\\txt_yes_no.txt", ios::out | ios::trunc); //open in constructor
	std::string data("true");
	txt_yes_no << data << endl; 

	first_start();
}