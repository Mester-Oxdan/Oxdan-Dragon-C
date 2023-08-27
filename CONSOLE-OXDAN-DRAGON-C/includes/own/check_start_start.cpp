#include <windows.h>
#include <fstream>
#include <string>
#include "all_diclarations.h"

void check_start_start()
{
	string text_yes_no;

	// Read from the text file
	ifstream txt_yes_no("C:\\Users\\bogda\\source\\repos\\CONSOLE-OXDAN-DRAGON-C++\\x64\\Debug\\resuorces\\all_txt\\txt_yes_no.txt");

	// Use a while loop together with the getline() function to read the file line by line
	while (txt_yes_no >> text_yes_no)
	{

		if (text_yes_no == "false")
		{
			start_start(false);
		}

		if (text_yes_no == "true")
		{
			start_start(true);
		}
	}

	// Close the file
	txt_yes_no.close();
}