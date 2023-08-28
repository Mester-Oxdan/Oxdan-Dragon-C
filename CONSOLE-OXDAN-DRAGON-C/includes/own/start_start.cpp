#include <windows.h>
#include <conio.h>
#include <string>
#include <string.h>
#include <vector>
#include <iostream>
#include <fstream>
#include <boost/algorithm/string.hpp>
#include <chrono>
#include <map>
#include "all_diclarations.h"

using namespace std;

vector<string> history;
string x;
string writex;
vector<string> tokens;
char buf1[256];

HANDLE hStdOuttgf32 = GetStdHandle(STD_OUTPUT_HANDLE);

void ConsoleCursorVisibleytg32(bool show, short size)
{
	CONSOLE_CURSOR_INFO structCursorInfo;
	GetConsoleCursorInfo(hStdOuttgf32, &structCursorInfo);
	structCursorInfo.bVisible = show;
	structCursorInfo.dwSize = size;
	SetConsoleCursorInfo(hStdOuttgf32, &structCursorInfo);
}

void start_start(bool willstart)
{
	ConsoleCursorVisibleytg32(true, 20);

	string text_yes_no;

	// Read from the text file
	ifstream txt_yes_no("includes\\own\\resuorces\\all_txt\\txt_yes_no.txt");

	while (txt_yes_no >> text_yes_no)
	{
		if (text_yes_no == "false")
		{
			willstart = false;
		}

		if (text_yes_no == "true")
		{
			willstart = true;
		}
	}

	clock_t timer = clock();
	
	while (true)
	{

		if (willstart == true)
		{
			printf("\n");
			GetCurrentDirectoryA(255, buf1);
			cout << buf1 << ">> "; // get path (+)
			getline(cin, writex);
			//cout << "\n";

			for (int i = 0; i < writex.length(); i++) // to lower keys (+)
				writex[i] = tolower(writex[i]);

			boost::trim(writex); // remove !spaces!
			boost::split(tokens, writex, boost::is_any_of(" "));
			x = tokens[0];

			history.push_back(x);

			// big -> class
			// midle -> class
			// small -> class

			Games(); // (+) big
			Serious(); // (+) big
			Hacker_Stuffs(); // (+) big
			Own(willstart, timer, history); // (+) big
			Main_Commands(); // (+) big
			Elses(); // (+) big
			Pictures(); // (+) middle
			Accounts(); // (+) middle
			Pranks(); // (+) middle
			Commands(); // (+) small

			if (x == "" || x == "tetris" || x == "tic_tac_toe" || x == "2048" || x == "del_account" || x == "go_to") // nothing (+)
			{
				start_start(true);
			}

			else
			{
				printf("\n");
				cout << "'" + x + "'" + " Is \033[0;31mbad\033[0;37m command" << endl; // else (+)

				start_start(true);
			}

		}

		if (willstart == false)
		{
			getline(cin, writex);
			for (int i = 0; i < writex.length(); i++) // to lower keys (+)
				writex[i] = tolower(writex[i]);

			boost::trim(writex); // remove !spaces!
			boost::split(tokens, writex, boost::is_any_of(" "));
			x = tokens[0];

			history.push_back(x);

			// big -> class
			// midle -> class
			// small -> class

			Games(); // (+) big
			Serious(); // (+) big
			Hacker_Stuffs(); // (+) big
			Own(willstart, timer, history); // (+) big
			Main_Commands(); // (+) big
			Elses(); // (+) big
			Pictures(); // (+) middle
			Accounts(); // (+) middle
			Pranks(); // (+) middle
			Commands(); // (+) small

			if (x == "" || x == "tetris" || x == "tic_tac_toe" || x == "2048" || x == "del_account" || x == "go_to") // nothing (+)
			{
				start_start(false);
			}

			else
			{
				printf("\n");
				cout << "'" + x + "'" + " Is \033[0;31mbad\033[0;37m command" << endl; // else (+)

				start_start(false);
			}
		}
	}
}