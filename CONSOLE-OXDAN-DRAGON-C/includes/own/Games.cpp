#include <windows.h>
#include <vector>
#include <iostream>
#include <conio.h>
#include "all_diclarations.h"

using namespace std;

void Games()
{
	if (x == "pacman") // pacman (+)
	{
		try
		{
			pacman_start();
		}

		catch (...)
		{
			check_start_start();
		}
	}

	if (x == "doom") // doom (+)
	{
		try
		{

			string filePath = oxdan_dragon_c + "/includes/own/test_python_py_doom.py";
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

		catch (...)
		{
			check_start_start();
		}
	}

	if (x == "2048") // 2048 (+)
	{
		try
		{
			start_2048_start();
		}

		catch (...)
		{
			check_start_start();
		}
	}

	if (x == "car_racing") // car_racing (+)
	{
		try
		{
			car_racing_start();
		}

		catch (...)
		{
			check_start_start();
		}
	}

	if (x == "tic_tac_toe") // tic_tac_toe (+)
	{
		if (tokens.size() < 2)
		{
			printf("\033[0;31m");
			printf("\n");
			printf("(!ERROR!)");
			printf("\033[0;37m");
			printf(" = ");
			printf("\033[0;32m");
			printf("(!Enter tic_tac_toe option!)\n");
			printf("\033[0;37m");

			check_start_start();
		}

		else
		{
			char buf[256];
			string name56 = tokens[1];

			if (name56 == "ai") // (+)
			{
				try
				{
					tic_tac_toe_ai_start();
				}

				catch (...)
				{
					check_start_start();
				}
			}

			if (name56 == "2") // (+)
			{
				try
				{
					// add icon

					tic_tac_toe_2_start();
				}

				catch (...)
				{
					check_start_start();
				}
			}

			else
			{
				printf("\033[0;31m");
				printf("\n");
				printf("(!ERROR!)");
				printf("\033[0;37m");
				printf(" = ");
				printf("\033[0;32m");
				printf("(!Enter tic_tac_toe option!)\n");
				printf("\033[0;37m");

				check_start_start();
			}
		}
	}

	if (x == "ping_pong") // ping_pong (+)
	{
		if (tokens.size() < 2)
		{
			printf("\033[0;31m");
			printf("\n");
			printf("(!ERROR!)");
			printf("\033[0;37m");
			printf(" = ");
			printf("\033[0;32m");
			printf("(!Enter ping_pong option!)\n");
			printf("\033[0;37m");

			check_start_start();
		}

		else
		{
			char buf[256];
			string name = tokens[1];

			if (name == "1") // (+)
			{
				try
				{
					ping_pong_1_start();
				}

				catch (...)
				{
					check_start_start();
				}

			}

			if (name == "2") // (+)
			{
				try
				{
					ping_pong_2_start();
				}

				catch (...)
				{
					check_start_start();
				}
			}
			if (name == "ai") // (+)
			{
				try
				{
					ping_pong_ai_start();
				}

				catch (...)
				{
					check_start_start();
				}
			}

			else
			{
				printf("\033[0;31m");
				printf("\n");
				printf("(!ERROR!)");
				printf("\033[0;37m");
				printf(" = ");
				printf("\033[0;32m");
				printf("(!Enter ping_pong option!)\n");
				printf("\033[0;37m");

				check_start_start();
			}

		}

	}

	if (x == "arkanoid") // arkanoid (-)
	{
		try
		{
			// add icon
			// add not close window

			arkanoid_start();
		}

		catch (...)
		{
			check_start_start();
		}
	}

	else if (x == "tetris") // tetris (-)
	{
		try
		{

			tetris_start();
		}

		catch (...)
		{
			check_start_start();
		}
	}

	else if (x == "chess") // chess (+)
	{
		if (tokens.size() < 2)
		{
			printf("\033[0;31m");
			printf("\n");
			printf("(!ERROR!)");
			printf("\033[0;37m");
			printf(" = ");
			printf("\033[0;32m");
			printf("(!Enter chess option!)\n");
			printf("\033[0;37m");

			check_start_start();
		}

		else
		{
			char buf[256];
			string name = tokens[1];

			if (name == "ai")
			{
				try
				{
					chess_ai_start();
					check_start_start();
				}

				catch (...)
				{
					check_start_start();
				}
			}

			if (name == "2")
			{
				try
				{
					chess_2_start();
					check_start_start();
				}

				catch (...)
				{
					check_start_start();
				}
			}

			else
			{
				printf("\033[0;31m");
				printf("\n");
				printf("(!ERROR!)");
				printf("\033[0;37m");
				printf(" = ");
				printf("\033[0;32m");
				printf("(!Enter chess option!)\n");
				printf("\033[0;37m");

				check_start_start();
			}

		}
		system("cls");
		printf(" \033[0;37m");
		check_start_start(); // (+)
	}

	else if (x == "checkers") // checkers (+)
	{
		if (tokens.size() < 2)
		{
			printf("\033[0;31m");
			printf("\n");
			printf("(!ERROR!)");
			printf("\033[0;37m");
			printf(" = ");
			printf("\033[0;32m");
			printf("(!Enter checkers option!)\n");
			printf("\033[0;37m");

			check_start_start();
		}

		else
		{
			char buf[256];
			string name_90y = tokens[1];

			if (name_90y == "2")
			{
				try
				{
					checkers_2_start();
					check_start_start();
				}

				catch (...)
				{
					check_start_start();
				}
			}

			else if (name_90y == "ai")
			{
				try
				{
					checkers_ai_start();
					check_start_start();
				}

				catch (...)
				{
					check_start_start();
				}
			}

			else
			{
				printf("\033[0;31m");
				printf("\n");
				printf("(!ERROR!)");
				printf("\033[0;37m");
				printf(" = ");
				printf("\033[0;32m");
				printf("(!Enter checkers option!)\n");
				printf("\033[0;37m");

				check_start_start();
			}

		}
		system("cls");
		printf(" \033[0;37m");
		check_start_start(); // (+)
	}

	else if (x == "snake") // snake (+)
	{
		if (tokens.size() < 2)
		{
			printf("\033[0;31m");
			printf("\n");
			printf("(!ERROR!)");
			printf("\033[0;37m");
			printf(" = ");
			printf("\033[0;32m");
			printf("(!Enter snake option!)\n");
			printf("\033[0;37m");

			check_start_start();
		}

		else
		{
			char buf[256];
			string name = tokens[1];

			if (name == "ai")
			{
				try
				{
					snake_ai_start();
				}

				catch (...)
				{
					check_start_start();
				}
			}

			if (name == "1")
			{
				try
				{
					snake_1_start();
				}

				catch (...)
				{
					check_start_start();
				}
			}

			if (name == "2")
			{
				try
				{
					snake_2_start();
				}

				catch (...)
				{
					check_start_start();
				}
			}

			else
			{
				printf("\033[0;31m");
				printf("\n");
				printf("(!ERROR!)");
				printf("\033[0;37m");
				printf(" = ");
				printf("\033[0;32m");
				printf("(!Enter snake option!)\n");
				printf("\033[0;37m");

				check_start_start();
			}

		}
		system("cls");
		printf(" \033[0;37m");
		system("mode 141, 29"); // set size of console (+)
		SetWindow(143, 33); // set buffer size of console (+)
		check_start_start(); // (+)
	}

	else if (x == "guess_number") // guess_number (+)
	{
		try
		{
			guess_number_start();
		}

		catch (...)
		{
			check_start_start();
		}

	}

	else if (x == "battle_city") // battle_city (+)
	{
		try
		{
			battle_city_start();
		}

		catch (...)
		{
			check_start_start();
		}

	}

	else if (x == "mario") // mario (+)
	{
		try
		{
			mario_start();
			check_start_start();
		}

		catch (...)
		{
			check_start_start();
		}

	}

	else if (x == "math_game") // math_game (+)
	{
		try
		{
			math_game_start();
		}

		catch (...)
		{
			check_start_start();
		}

	}

	else if (x == "space_shooter") // space_shooter (+)
	{
		try
		{
			space_shooter_start();
		}

		catch (...)
		{
			check_start_start();
		}

	}

	else if (x == "typing_tutor") // typing_tutor (+)
	{
		try
		{
			system("mode 95, 29"); // set size of console (+)
			SetWindow(141, 29); // set buffer size of console (+)
			typing_tutor_start();
		}

		catch (...)
		{
			check_start_start();
		}

	}

	else if (x == "hangman") // hangman (+)
	{
		try
		{
			hangman_start();
		}

		catch (...)
		{
			check_start_start();
		}
	}

	else if (x == "flappy_bird") // flappy bird (+)
	{
		try
		{
			flappybird_start();
		}

		catch (...)
		{
			check_start_start();
		}
	}
}