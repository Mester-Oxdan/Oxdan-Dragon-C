#include <windows.h>
#include <string>
#include "all_diclarations.h"

using namespace std;

void installs_start(string name)
{

	if (name == "blue_stacks")
	{
		
		//system("start C:\\Users\\bogda\\source\\repos\\CONSOLE-OXDAN-DRAGON-C++\\x64\\Debug\\resuorces\\installs\\BlueStacksInstaller_5.11.11.1002_native_9721e75d137004013d09dcb5ffc7f76d_MzsxNSwwOzUsMTsxNSw0OzE1.exe");
		string filePath = oxdan_dragon_c + "/includes/own/resuorces/installs/BlueStacksInstaller_5.11.11.1002_native_9721e75d137004013d09dcb5ffc7f76d_MzsxNSwwOzUsMTsxNSw0OzE1.exe";
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
				string cmd_cmd = "start ";
				cmd_cmd += modifiedPath;
				system(cmd_cmd.c_str());
			}
		}
		else {
			//cout << "No words with spaces found." << endl;
		}
		//cout << "pt 2: oxidan_dragpn_c =" << oxdan_dragon_c << endl;
		//_getch();
		//string cmd_3 = "/includes/own/test_python_py_doom.py";
		//string cmd_33 = "start " + oxdan_dragon_c + cmd_3;
		//string cmd_33 = "C:\\Users\\bogda\\Downloads\\"Oxdan-Dragon-C - Copy\\test jy"\\CONSOLE - OXDAN - DRAGON - C\\CONSOLE - OXDAN - DRAGON - C++.exe";
		//cout << "pt 3: cmd_33= " << cmd_33 << endl;
		//_getch();
		system(filePath.c_str());
		check_start_start();
	
	}

	if (name == "viber")
	{
		//system("start C:\\Users\\bogda\\source\\repos\\CONSOLE-OXDAN-DRAGON-C++\\x64\\Debug\\resuorces\\installs\\ViberSetup.exe");
		//system("start C:\\Users\\bogda\\source\\repos\\CONSOLE-OXDAN-DRAGON-C++\\x64\\Debug\\resuorces\\installs\\BlueStacksInstaller_5.11.11.1002_native_9721e75d137004013d09dcb5ffc7f76d_MzsxNSwwOzUsMTsxNSw0OzE1.exe");
		string filePath = oxdan_dragon_c + "/includes/own/resuorces/installs/ViberSetup.exe";
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
				string cmd_cmd = "start ";
				cmd_cmd += modifiedPath;
				system(cmd_cmd.c_str());
			}
		}
		else {
			//cout << "No words with spaces found." << endl;
		}
		//cout << "pt 2: oxidan_dragpn_c =" << oxdan_dragon_c << endl;
		//_getch();
		//string cmd_3 = "/includes/own/test_python_py_doom.py";
		//string cmd_33 = "start " + oxdan_dragon_c + cmd_3;
		//string cmd_33 = "C:\\Users\\bogda\\Downloads\\"Oxdan-Dragon-C - Copy\\test jy"\\CONSOLE - OXDAN - DRAGON - C\\CONSOLE - OXDAN - DRAGON - C++.exe";
		//cout << "pt 3: cmd_33= " << cmd_33 << endl;
		//_getch();
		system(filePath.c_str());
		check_start_start();
	}

	if (name == "custom_cursor")
	{
		//system("start C:\\Users\\bogda\\source\\repos\\CONSOLE-OXDAN-DRAGON-C++\\x64\\Debug\\resuorces\\installs\\");
	
		string filePath = oxdan_dragon_c + "/includes/own/resuorces/installs/CustomCursor.exe";
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
				string cmd_cmd = "start ";
				cmd_cmd += modifiedPath;
				system(cmd_cmd.c_str());
			}
		}
		else {
			//cout << "No words with spaces found." << endl;
		}
		//cout << "pt 2: oxidan_dragpn_c =" << oxdan_dragon_c << endl;
		//_getch();
		//string cmd_3 = "/includes/own/test_python_py_doom.py";
		//string cmd_33 = "start " + oxdan_dragon_c + cmd_3;
		//string cmd_33 = "C:\\Users\\bogda\\Downloads\\"Oxdan-Dragon-C - Copy\\test jy"\\CONSOLE - OXDAN - DRAGON - C\\CONSOLE - OXDAN - DRAGON - C++.exe";
		//cout << "pt 3: cmd_33= " << cmd_33 << endl;
		//_getch();
		system(filePath.c_str());
		check_start_start();
	}

	if (name == "telegram")
	{
		//system("start C:\\Users\\bogda\\source\\repos\\CONSOLE-OXDAN-DRAGON-C++\\x64\\Debug\\resuorces\\installs\\");
	
		string filePath = oxdan_dragon_c + "/includes/own/resuorces/installs/tsetup-x64.4.0.2.exe";
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
				string cmd_cmd = "start ";
				cmd_cmd += modifiedPath;
				system(cmd_cmd.c_str());
			}
		}
		else {
			//cout << "No words with spaces found." << endl;
		}
		//cout << "pt 2: oxidan_dragpn_c =" << oxdan_dragon_c << endl;
		//_getch();
		//string cmd_3 = "/includes/own/test_python_py_doom.py";
		//string cmd_33 = "start " + oxdan_dragon_c + cmd_3;
		//string cmd_33 = "C:\\Users\\bogda\\Downloads\\"Oxdan-Dragon-C - Copy\\test jy"\\CONSOLE - OXDAN - DRAGON - C\\CONSOLE - OXDAN - DRAGON - C++.exe";
		//cout << "pt 3: cmd_33= " << cmd_33 << endl;
		//_getch();
		system(filePath.c_str());
		check_start_start();
	}

	if (name == "skype")
	{
		//system("start C:\\Users\\bogda\\source\\repos\\CONSOLE-OXDAN-DRAGON-C++\\x64\\Debug\\resuorces\\installs\\");
	
		string filePath = oxdan_dragon_c + "/includes/own/resuorces/installs/Skype-8.89.0.403.exe";
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
				string cmd_cmd = "start ";
				cmd_cmd += modifiedPath;
				system(cmd_cmd.c_str());
			}
		}
		else {
			//cout << "No words with spaces found." << endl;
		}
		//cout << "pt 2: oxidan_dragpn_c =" << oxdan_dragon_c << endl;
		//_getch();
		//string cmd_3 = "/includes/own/test_python_py_doom.py";
		//string cmd_33 = "start " + oxdan_dragon_c + cmd_3;
		//string cmd_33 = "C:\\Users\\bogda\\Downloads\\"Oxdan-Dragon-C - Copy\\test jy"\\CONSOLE - OXDAN - DRAGON - C\\CONSOLE - OXDAN - DRAGON - C++.exe";
		//cout << "pt 3: cmd_33= " << cmd_33 << endl;
		//_getch();
		system(filePath.c_str());
		check_start_start();
	}

	if (name == "steam")
	{
		//system("start C:\\Users\\bogda\\source\\repos\\CONSOLE-OXDAN-DRAGON-C++\\x64\\Debug\\resuorces\\installs\\");
	
		string filePath = oxdan_dragon_c + "/includes/own/resuorces/installs/SteamSetup.exe";
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
				string cmd_cmd = "start ";
				cmd_cmd += modifiedPath;
				system(cmd_cmd.c_str());
			}
		}
		else {
			//cout << "No words with spaces found." << endl;
		}
		//cout << "pt 2: oxidan_dragpn_c =" << oxdan_dragon_c << endl;
		//_getch();
		//string cmd_3 = "/includes/own/test_python_py_doom.py";
		//string cmd_33 = "start " + oxdan_dragon_c + cmd_3;
		//string cmd_33 = "C:\\Users\\bogda\\Downloads\\"Oxdan-Dragon-C - Copy\\test jy"\\CONSOLE - OXDAN - DRAGON - C\\CONSOLE - OXDAN - DRAGON - C++.exe";
		//cout << "pt 3: cmd_33= " << cmd_33 << endl;
		//_getch();
		system(filePath.c_str());
		check_start_start();
	}

	if (name == "unity")
	{
		//system("start C:\\Users\\bogda\\source\\repos\\CONSOLE-OXDAN-DRAGON-C++\\x64\\Debug\\resuorces\\installs\\");
	
		string filePath = oxdan_dragon_c + "/includes/own/resuorces/installs/UnityHubSetup.exe";
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
				string cmd_cmd = "start ";
				cmd_cmd += modifiedPath;
				system(cmd_cmd.c_str());
			}
		}
		else {
			//cout << "No words with spaces found." << endl;
		}
		//cout << "pt 2: oxidan_dragpn_c =" << oxdan_dragon_c << endl;
		//_getch();
		//string cmd_3 = "/includes/own/test_python_py_doom.py";
		//string cmd_33 = "start " + oxdan_dragon_c + cmd_3;
		//string cmd_33 = "C:\\Users\\bogda\\Downloads\\"Oxdan-Dragon-C - Copy\\test jy"\\CONSOLE - OXDAN - DRAGON - C\\CONSOLE - OXDAN - DRAGON - C++.exe";
		//cout << "pt 3: cmd_33= " << cmd_33 << endl;
		//_getch();
		system(filePath.c_str());
		check_start_start();
	}

	if (name == "epic_games")
	{
		//system("start C:\\Users\\bogda\\source\\repos\\CONSOLE-OXDAN-DRAGON-C++\\x64\\Debug\\resuorces\\installs\\");
	
		string filePath = oxdan_dragon_c + "/includes/own/resuorces/installs/EpicInstaller-13.3.0-unrealEngine-f263dd192152435b9e0e9f600d5a419c.msi";
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
				string cmd_cmd = "start ";
				cmd_cmd += modifiedPath;
				system(cmd_cmd.c_str());
			}
		}
		else {
			//cout << "No words with spaces found." << endl;
		}
		//cout << "pt 2: oxidan_dragpn_c =" << oxdan_dragon_c << endl;
		//_getch();
		//string cmd_3 = "/includes/own/test_python_py_doom.py";
		//string cmd_33 = "start " + oxdan_dragon_c + cmd_3;
		//string cmd_33 = "C:\\Users\\bogda\\Downloads\\"Oxdan-Dragon-C - Copy\\test jy"\\CONSOLE - OXDAN - DRAGON - C\\CONSOLE - OXDAN - DRAGON - C++.exe";
		//cout << "pt 3: cmd_33= " << cmd_33 << endl;
		//_getch();
		system(filePath.c_str());
		check_start_start();
	}

	if (name == "7-zip")
	{
		//system("start C:\\Users\\bogda\\source\\repos\\CONSOLE-OXDAN-DRAGON-C++\\x64\\Debug\\resuorces\\installs\\");
	
		string filePath = oxdan_dragon_c + "/includes/own/resuorces/installs/bf782a98-59ce-4106-8a48-ce116dafa848.exe";
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
				string cmd_cmd = "start ";
				cmd_cmd += modifiedPath;
				system(cmd_cmd.c_str());
			}
		}
		else {
			//cout << "No words with spaces found." << endl;
		}
		//cout << "pt 2: oxidan_dragpn_c =" << oxdan_dragon_c << endl;
		//_getch();
		//string cmd_3 = "/includes/own/test_python_py_doom.py";
		//string cmd_33 = "start " + oxdan_dragon_c + cmd_3;
		//string cmd_33 = "C:\\Users\\bogda\\Downloads\\"Oxdan-Dragon-C - Copy\\test jy"\\CONSOLE - OXDAN - DRAGON - C\\CONSOLE - OXDAN - DRAGON - C++.exe";
		//cout << "pt 3: cmd_33= " << cmd_33 << endl;
		//_getch();
		system(filePath.c_str());
		check_start_start();
	}

	if (name == "google_chrome")
	{
		//system("start C:\\Users\\bogda\\source\\repos\\CONSOLE-OXDAN-DRAGON-C++\\x64\\Debug\\resuorces\\installs\\");
	
		string filePath = oxdan_dragon_c + "/includes/own/resuorces/installs/ChromeSetup.exe";
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
				string cmd_cmd = "start ";
				cmd_cmd += modifiedPath;
				system(cmd_cmd.c_str());
			}
		}
		else {
			//cout << "No words with spaces found." << endl;
		}
		//cout << "pt 2: oxidan_dragpn_c =" << oxdan_dragon_c << endl;
		//_getch();
		//string cmd_3 = "/includes/own/test_python_py_doom.py";
		//string cmd_33 = "start " + oxdan_dragon_c + cmd_3;
		//string cmd_33 = "C:\\Users\\bogda\\Downloads\\"Oxdan-Dragon-C - Copy\\test jy"\\CONSOLE - OXDAN - DRAGON - C\\CONSOLE - OXDAN - DRAGON - C++.exe";
		//cout << "pt 3: cmd_33= " << cmd_33 << endl;
		//_getch();
		system(filePath.c_str());
		check_start_start();
	}

	if (name == "git")
	{
		//system("start C:\\Users\\bogda\\source\\repos\\CONSOLE-OXDAN-DRAGON-C++\\x64\\Debug\\resuorces\\installs\\");
	
		string filePath = oxdan_dragon_c + "/includes/own/resuorces/installs/Git-2.37.2.2-64-bit.exe";
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
				string cmd_cmd = "start ";
				cmd_cmd += modifiedPath;
				system(cmd_cmd.c_str());
			}
		}
		else {
			//cout << "No words with spaces found." << endl;
		}
		//cout << "pt 2: oxidan_dragpn_c =" << oxdan_dragon_c << endl;
		//_getch();
		//string cmd_3 = "/includes/own/test_python_py_doom.py";
		//string cmd_33 = "start " + oxdan_dragon_c + cmd_3;
		//string cmd_33 = "C:\\Users\\bogda\\Downloads\\"Oxdan-Dragon-C - Copy\\test jy"\\CONSOLE - OXDAN - DRAGON - C\\CONSOLE - OXDAN - DRAGON - C++.exe";
		//cout << "pt 3: cmd_33= " << cmd_33 << endl;
		//_getch();
		system(filePath.c_str());
		check_start_start();
	}

	if (name == "npm")
	{
		//system("start C:\\Users\\bogda\\source\\repos\\CONSOLE-OXDAN-DRAGON-C++\\x64\\Debug\\resuorces\\installs\\");
	
		string filePath = oxdan_dragon_c + "/includes/own/resuorces/installs/node-v18.16.0-x64.msi";
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
				string cmd_cmd = "start ";
				cmd_cmd += modifiedPath;
				system(cmd_cmd.c_str());
			}
		}
		else {
			//cout << "No words with spaces found." << endl;
		}
		//cout << "pt 2: oxidan_dragpn_c =" << oxdan_dragon_c << endl;
		//_getch();
		//string cmd_3 = "/includes/own/test_python_py_doom.py";
		//string cmd_33 = "start " + oxdan_dragon_c + cmd_3;
		//string cmd_33 = "C:\\Users\\bogda\\Downloads\\"Oxdan-Dragon-C - Copy\\test jy"\\CONSOLE - OXDAN - DRAGON - C\\CONSOLE - OXDAN - DRAGON - C++.exe";
		//cout << "pt 3: cmd_33= " << cmd_33 << endl;
		//_getch();
		system(filePath.c_str());
		check_start_start();
	}

	if (name == "miniconda")
	{
		//system("start C:\\Users\\bogda\\source\\repos\\CONSOLE-OXDAN-DRAGON-C++\\x64\\Debug\\resuorces\\installs\\");
	
		string filePath = oxdan_dragon_c + "/includes/own/resuorces/installs/Miniconda3-latest-Windows-x86_64.exe";
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
				string cmd_cmd = "start ";
				cmd_cmd += modifiedPath;
				system(cmd_cmd.c_str());
			}
		}
		else {
			//cout << "No words with spaces found." << endl;
		}
		//cout << "pt 2: oxidan_dragpn_c =" << oxdan_dragon_c << endl;
		//_getch();
		//string cmd_3 = "/includes/own/test_python_py_doom.py";
		//string cmd_33 = "start " + oxdan_dragon_c + cmd_3;
		//string cmd_33 = "C:\\Users\\bogda\\Downloads\\"Oxdan-Dragon-C - Copy\\test jy"\\CONSOLE - OXDAN - DRAGON - C\\CONSOLE - OXDAN - DRAGON - C++.exe";
		//cout << "pt 3: cmd_33= " << cmd_33 << endl;
		//_getch();
		system(filePath.c_str());
		check_start_start();
	}

	if (name == "python-3.10.6")
	{
		//system("start C:\\Users\\bogda\\source\\repos\\CONSOLE-OXDAN-DRAGON-C++\\x64\\Debug\\resuorces\\installs\\");
	
		string filePath = oxdan_dragon_c + "/includes/own/resuorces/installs/python-3.10.6-amd64.exe";
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
				string cmd_cmd = "start ";
				cmd_cmd += modifiedPath;
				system(cmd_cmd.c_str());
			}
		}
		else {
			//cout << "No words with spaces found." << endl;
		}
		//cout << "pt 2: oxidan_dragpn_c =" << oxdan_dragon_c << endl;
		//_getch();
		//string cmd_3 = "/includes/own/test_python_py_doom.py";
		//string cmd_33 = "start " + oxdan_dragon_c + cmd_3;
		//string cmd_33 = "C:\\Users\\bogda\\Downloads\\"Oxdan-Dragon-C - Copy\\test jy"\\CONSOLE - OXDAN - DRAGON - C\\CONSOLE - OXDAN - DRAGON - C++.exe";
		//cout << "pt 3: cmd_33= " << cmd_33 << endl;
		//_getch();
		system(filePath.c_str());
		check_start_start();
	}

	if (name == "torrent")
	{
		//system("start C:\\Users\\bogda\\source\\repos\\CONSOLE-OXDAN-DRAGON-C++\\x64\\Debug\\resuorces\\installs\\");
	
		string filePath = oxdan_dragon_c + "/includes/own/resuorces/installs/utorrent_installer.exe";
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
				string cmd_cmd = "start ";
				cmd_cmd += modifiedPath;
				system(cmd_cmd.c_str());
			}
		}
		else {
			//cout << "No words with spaces found." << endl;
		}
		//cout << "pt 2: oxidan_dragpn_c =" << oxdan_dragon_c << endl;
		//_getch();
		//string cmd_3 = "/includes/own/test_python_py_doom.py";
		//string cmd_33 = "start " + oxdan_dragon_c + cmd_3;
		//string cmd_33 = "C:\\Users\\bogda\\Downloads\\"Oxdan-Dragon-C - Copy\\test jy"\\CONSOLE - OXDAN - DRAGON - C\\CONSOLE - OXDAN - DRAGON - C++.exe";
		//cout << "pt 3: cmd_33= " << cmd_33 << endl;
		//_getch();
		system(filePath.c_str());
		check_start_start();
	}

	if (name == "virtualbox")
	{
		//system("start C:\\Users\\bogda\\source\\repos\\CONSOLE-OXDAN-DRAGON-C++\\x64\\Debug\\resuorces\\installs\\");
	
		string filePath = oxdan_dragon_c + "/includes/own/resuorces/installs/VirtualBox-6.1.36-152435-Win.exe";
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
				string cmd_cmd = "start ";
				cmd_cmd += modifiedPath;
				system(cmd_cmd.c_str());
			}
		}
		else {
			//cout << "No words with spaces found." << endl;
		}
		//cout << "pt 2: oxidan_dragpn_c =" << oxdan_dragon_c << endl;
		//_getch();
		//string cmd_3 = "/includes/own/test_python_py_doom.py";
		//string cmd_33 = "start " + oxdan_dragon_c + cmd_3;
		//string cmd_33 = "C:\\Users\\bogda\\Downloads\\"Oxdan-Dragon-C - Copy\\test jy"\\CONSOLE - OXDAN - DRAGON - C\\CONSOLE - OXDAN - DRAGON - C++.exe";
		//cout << "pt 3: cmd_33= " << cmd_33 << endl;
		//_getch();
		system(filePath.c_str());
		check_start_start();
	}

	if (name == "visual_studio")
	{
		//system("start C:\\Users\\bogda\\source\\repos\\CONSOLE-OXDAN-DRAGON-C++\\x64\\Debug\\resuorces\\installs\\");
	
		string filePath = oxdan_dragon_c + "/includes/own/resuorces/installs/VisualStudioSetup.exe";
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
				string cmd_cmd = "start ";
				cmd_cmd += modifiedPath;
				system(cmd_cmd.c_str());
			}
		}
		else {
			//cout << "No words with spaces found." << endl;
		}
		//cout << "pt 2: oxidan_dragpn_c =" << oxdan_dragon_c << endl;
		//_getch();
		//string cmd_3 = "/includes/own/test_python_py_doom.py";
		//string cmd_33 = "start " + oxdan_dragon_c + cmd_3;
		//string cmd_33 = "C:\\Users\\bogda\\Downloads\\"Oxdan-Dragon-C - Copy\\test jy"\\CONSOLE - OXDAN - DRAGON - C\\CONSOLE - OXDAN - DRAGON - C++.exe";
		//cout << "pt 3: cmd_33= " << cmd_33 << endl;
		//_getch();
		system(filePath.c_str());
		check_start_start();
	}

	if (name == "vlc")
	{
		//system("start C:\\Users\\bogda\\source\\repos\\CONSOLE-OXDAN-DRAGON-C++\\x64\\Debug\\resuorces\\installs\\");
	
		string filePath = oxdan_dragon_c + "/includes/own/resuorces/installs/vlc-3.0.17.4-win32.exe";
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
				string cmd_cmd = "start ";
				cmd_cmd += modifiedPath;
				system(cmd_cmd.c_str());
			}
		}
		else {
			//cout << "No words with spaces found." << endl;
		}
		//cout << "pt 2: oxidan_dragpn_c =" << oxdan_dragon_c << endl;
		//_getch();
		//string cmd_3 = "/includes/own/test_python_py_doom.py";
		//string cmd_33 = "start " + oxdan_dragon_c + cmd_3;
		//string cmd_33 = "C:\\Users\\bogda\\Downloads\\"Oxdan-Dragon-C - Copy\\test jy"\\CONSOLE - OXDAN - DRAGON - C\\CONSOLE - OXDAN - DRAGON - C++.exe";
		//cout << "pt 3: cmd_33= " << cmd_33 << endl;
		//_getch();
		system(filePath.c_str());
		check_start_start();
	}

	if (name == "vscode")
	{
		//system("start C:\\Users\\bogda\\source\\repos\\CONSOLE-OXDAN-DRAGON-C++\\x64\\Debug\\resuorces\\installs\\");
	
		string filePath = oxdan_dragon_c + "/includes/own/resuorces/installs/VSCodeUserSetup-x64-1.75.0.exe";
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
				string cmd_cmd = "start ";
				cmd_cmd += modifiedPath;
				system(cmd_cmd.c_str());
			}
		}
		else {
			//cout << "No words with spaces found." << endl;
		}
		//cout << "pt 2: oxidan_dragpn_c =" << oxdan_dragon_c << endl;
		//_getch();
		//string cmd_3 = "/includes/own/test_python_py_doom.py";
		//string cmd_33 = "start " + oxdan_dragon_c + cmd_3;
		//string cmd_33 = "C:\\Users\\bogda\\Downloads\\"Oxdan-Dragon-C - Copy\\test jy"\\CONSOLE - OXDAN - DRAGON - C\\CONSOLE - OXDAN - DRAGON - C++.exe";
		//cout << "pt 3: cmd_33= " << cmd_33 << endl;
		//_getch();
		system(filePath.c_str());
		check_start_start();
	}

	if (name == "winsdk")
	{
		//system("start C:\\Users\\bogda\\source\\repos\\CONSOLE-OXDAN-DRAGON-C++\\x64\\Debug\\resuorces\\installs\\");
	
		string filePath = oxdan_dragon_c + "/includes/own/resuorces/installs/winsdksetup.exe";
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
				string cmd_cmd = "start ";
				cmd_cmd += modifiedPath;
				system(cmd_cmd.c_str());
			}
		}
		else {
			//cout << "No words with spaces found." << endl;
		}
		//cout << "pt 2: oxidan_dragpn_c =" << oxdan_dragon_c << endl;
		//_getch();
		//string cmd_3 = "/includes/own/test_python_py_doom.py";
		//string cmd_33 = "start " + oxdan_dragon_c + cmd_3;
		//string cmd_33 = "C:\\Users\\bogda\\Downloads\\"Oxdan-Dragon-C - Copy\\test jy"\\CONSOLE - OXDAN - DRAGON - C\\CONSOLE - OXDAN - DRAGON - C++.exe";
		//cout << "pt 3: cmd_33= " << cmd_33 << endl;
		//_getch();
		system(filePath.c_str());
		check_start_start();
	}

	if (name == "wireshark")
	{
		//system("start C:\\Users\\bogda\\source\\repos\\CONSOLE-OXDAN-DRAGON-C++\\x64\\Debug\\resuorces\\installs\\");
	
		string filePath = oxdan_dragon_c + "/includes/own/resuorces/installs/Wireshark-win32-3.6.0.exe";
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
				string cmd_cmd = "start ";
				cmd_cmd += modifiedPath;
				system(cmd_cmd.c_str());
			}
		}
		else {
			//cout << "No words with spaces found." << endl;
		}
		//cout << "pt 2: oxidan_dragpn_c =" << oxdan_dragon_c << endl;
		//_getch();
		//string cmd_3 = "/includes/own/test_python_py_doom.py";
		//string cmd_33 = "start " + oxdan_dragon_c + cmd_3;
		//string cmd_33 = "C:\\Users\\bogda\\Downloads\\"Oxdan-Dragon-C - Copy\\test jy"\\CONSOLE - OXDAN - DRAGON - C\\CONSOLE - OXDAN - DRAGON - C++.exe";
		//cout << "pt 3: cmd_33= " << cmd_33 << endl;
		//_getch();
		system(filePath.c_str());
		check_start_start();
	}

	if (name == "zeal")
	{
		//system("start C:\\Users\\bogda\\source\\repos\\CONSOLE-OXDAN-DRAGON-C++\\x64\\Debug\\resuorces\\installs\\");
	
		string filePath = oxdan_dragon_c + "/includes/own/resuorces/installs/zeal-0.6.1-windows-x64.msi";
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
				string cmd_cmd = "start ";
				cmd_cmd += modifiedPath;
				system(cmd_cmd.c_str());
			}
		}
		else {
			//cout << "No words with spaces found." << endl;
		}
		//cout << "pt 2: oxidan_dragpn_c =" << oxdan_dragon_c << endl;
		//_getch();
		//string cmd_3 = "/includes/own/test_python_py_doom.py";
		//string cmd_33 = "start " + oxdan_dragon_c + cmd_3;
		//string cmd_33 = "C:\\Users\\bogda\\Downloads\\"Oxdan-Dragon-C - Copy\\test jy"\\CONSOLE - OXDAN - DRAGON - C\\CONSOLE - OXDAN - DRAGON - C++.exe";
		//cout << "pt 3: cmd_33= " << cmd_33 << endl;
		//_getch();
		system(filePath.c_str());
		check_start_start();
	}

	if (name == "zoom")
	{
		//system("start C:\\Users\\bogda\\source\\repos\\CONSOLE-OXDAN-DRAGON-C++\\x64\\Debug\\resuorces\\installs\\");
	
		string filePath = oxdan_dragon_c + "/includes/own/resuorces/installs/zoom-cloud-meetings-5-13-5.exe";
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
				string cmd_cmd = "start ";
				cmd_cmd += modifiedPath;
				system(cmd_cmd.c_str());
			}
		}
		else {
			//cout << "No words with spaces found." << endl;
		}
		//cout << "pt 2: oxidan_dragpn_c =" << oxdan_dragon_c << endl;
		//_getch();
		//string cmd_3 = "/includes/own/test_python_py_doom.py";
		//string cmd_33 = "start " + oxdan_dragon_c + cmd_3;
		//string cmd_33 = "C:\\Users\\bogda\\Downloads\\"Oxdan-Dragon-C - Copy\\test jy"\\CONSOLE - OXDAN - DRAGON - C\\CONSOLE - OXDAN - DRAGON - C++.exe";
		//cout << "pt 3: cmd_33= " << cmd_33 << endl;
		//_getch();
		system(filePath.c_str());
		check_start_start();
	}

	if (name == "firefox")
	{
		//system("start C:\\Users\\bogda\\source\\repos\\CONSOLE-OXDAN-DRAGON-C++\\x64\\Debug\\resuorces\\installs\\");
	
		string filePath = oxdan_dragon_c + "/includes/own/resuorces/installs/Firefox_Installer.exe";
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
				string cmd_cmd = "start ";
				cmd_cmd += modifiedPath;
				system(cmd_cmd.c_str());
			}
		}
		else {
			//cout << "No words with spaces found." << endl;
		}
		//cout << "pt 2: oxidan_dragpn_c =" << oxdan_dragon_c << endl;
		//_getch();
		//string cmd_3 = "/includes/own/test_python_py_doom.py";
		//string cmd_33 = "start " + oxdan_dragon_c + cmd_3;
		//string cmd_33 = "C:\\Users\\bogda\\Downloads\\"Oxdan-Dragon-C - Copy\\test jy"\\CONSOLE - OXDAN - DRAGON - C\\CONSOLE - OXDAN - DRAGON - C++.exe";
		//cout << "pt 3: cmd_33= " << cmd_33 << endl;
		//_getch();
		system(filePath.c_str());
		check_start_start();
	}
}