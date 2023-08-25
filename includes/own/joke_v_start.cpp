#include <windows.h>
#include <conio.h>
#include <string>
#include "all_diclarations.h"
#include <boost/filesystem.hpp>
#include <boost/range/iterator_range.hpp>
#include <random>
#include <iostream>
#include <dirent.h>
#include <vector>

namespace fs = boost::filesystem;

using namespace std;

void changeVolumeretv()
{
	INPUT ip = { 0 };
	ip.type = INPUT_KEYBOARD;
	ip.ki.wVk = VK_VOLUME_UP;   //or VOLUME_DOWN or MUTE
	SendInput(1, &ip, sizeof(INPUT));
	ip.ki.dwFlags = KEYEVENTF_KEYUP;
	SendInput(1, &ip, sizeof(INPUT));
}

void changeVolumeretvv_()
{
	INPUT ip = { 0 };
	ip.type = INPUT_KEYBOARD;
	ip.ki.wVk = VK_VOLUME_DOWN;   //or VOLUME_DOWN or MUTE
	SendInput(1, &ip, sizeof(INPUT));
	ip.ki.dwFlags = KEYEVENTF_KEYUP;
	SendInput(1, &ip, sizeof(INPUT));
}

int joke_v_start(string name)
{
	try
	{
	if (name == "v" || name == "V")
	{
		srand(time(0));

		for (int i = 0; i < 50; i++)
		{
			changeVolumeretvv_();
		}

		for (int i = 0; i < 17; i++)
		{
			changeVolumeretv();
		}

		std::vector<std::string> files;

		// Specify the folder path
		const char* folderPath = "memes/(+)Video";

		// Open the directory
		DIR* directory = opendir(folderPath);
		if (directory == nullptr) {
			std::cerr << "Failed to open directory." << std::endl;
			return 1;
		}

		// Read the directory entries
		dirent* entry;
		while ((entry = readdir(directory)) != nullptr) {
			// Check if it's a regular file
			if (entry->d_type == DT_REG) {
				std::string filename = entry->d_name;
				files.push_back(filename);
			}
		}

		closedir(directory);

		if (files.empty()) {
			std::cout << "No files found in the folder." << std::endl;
			return 0;
		}

		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<> dis(0, files.size() - 1);

		// Generate a random index
		int randomIndex = dis(gen);

		// Get the randomly selected file
		std::string selectedFile_all = files[randomIndex];

		//std::cout << "Selected file: " << selectedFile << std::endl;

		//std::cout << "Selected file: " << selectedFile << std::endl;
		string com_all = "start memes/(+)Video/" + selectedFile_all;
		//com += selectedFile;
		system(com_all.c_str());

		check_start_start();

	}

	}

	catch (...)
	{
		printf("\033[0;31m");
		printf("\n");
		printf("(!ERROR!)");
		printf("\033[0;37m");
		printf(" = ");
		printf("\033[0;32m");
		printf("(!Enter joke option!)\n");
		printf("\033[0;37m");

		check_start_start();

	}

	return 0;
}