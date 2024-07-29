#include <iostream>
#include <windows.h>
#include <conio.h>
#include <math.h>
#include <stack>
#include <iomanip>
#include <sstream>
#include <boost/algorithm/string.hpp>
#include "all_diclarations.h"

#pragma warning(disable : 4996).

using namespace std;

bool isNumber44(string s)
{
	for (int i = 0; i < s.length(); i++)
		if (isdigit(s[i]) == false)
			return false;

	return true;
}

void d_price_calc_start() {
	string time;
	string plastic;
	int time_2;
	int plastic_2;
	printf("\n\033[0;31mEnter 'esc' (for exit) \033[0;37m\n");
	printf("\033[0;33mEnter time amount (minutes): \033[0;37m");
	cin >> time;
	boost::to_lower(time);
	boost::trim(time);
	if (time == "esc")
	{
		check_start_start();
	}

	else if (!(isNumber44(time)))
	{
		printf("\033[0;31m");
		printf("\n");
		printf("(!ERROR!)");
		printf("\033[0;37m");
		printf(" = ");
		printf("\033[0;32m");
		printf("(!Only integers!)\n");
		printf("\033[0;37m");
		getch();

		guess_number_start();
	}
	else {
		time_2 = atoi(time.c_str());
	}

	printf("\n\033[0;31mEnter 'esc' (for exit) \033[0;37m\n");
	printf("\033[0;33mEnter plastic amount (grams): \033[0;37m");
	cin >> plastic;
	boost::to_lower(plastic);
	boost::trim(plastic);
	if (plastic == "esc")
	{
		check_start_start();
	}

	else if (!(isNumber44(plastic)))
	{
		printf("\033[0;31m");
		printf("\n");
		printf("(!ERROR!)");
		printf("\033[0;37m");
		printf(" = ");
		printf("\033[0;32m");
		printf("(!Only integers!)\n");
		printf("\033[0;37m");
		getch();

		guess_number_start();
	}
	else {
		plastic_2 = atoi(plastic.c_str());
	}

	float pla_result = (((time_2 * 0.0007) + (plastic_2 * 0.018)) * 2.5 + 0.5);
	float petg_result = (((time_2 * 0.0007) + (plastic_2 * 0.015)) * 2.5 + 0.5);

	double pla_result_raunded = std::round(pla_result * 1000.0) / 1000.0;
	double petg_result_raunded = std::round(petg_result * 1000.0) / 1000.0;

	string choice;

	cout << "\n\033[0;33mPLA: \033[0;32m$\033[0;37m" << pla_result_raunded << "\n";
	cout << "\033[0;33mPETG: \033[0;32m$\033[0;37m" << petg_result_raunded << "\n\n";

	printf("\033[0;33mDo you want to calculate again? \033[0;33m(\033[0;32my\033[0;37m/\033[0;31mn\033[0;33m)\033[0;37m\n");
	cin >> choice;
	boost::to_lower(choice);
	boost::trim(choice);
	if (choice == "y" || choice == "yes")
	{
		d_price_calc_start();
	}
	else
	{
		check_start_start();
	}
}

void Serious()
{
	if (x == "tim" || x == "time") // tim (+)
	{
		try
		{
			time_start();
		}

		catch (...)
		{
			check_start_start();
		}
	}

	if (x == "screen_recorder") // screen_recorder (+)
	{
		try
		{
			screen_recorder_start();
			check_start_start();
		}

		catch (...)
		{
			check_start_start();
		}
	}

	if (x == "notepad") // notepad (+)
	{
		try
		{
			notepad_start();
		}

		catch (...)
		{
			check_start_start();
		}
	}
	if (x == "3d_price_calc") // 3d_price_calc (+)
	{
		try
		{
			d_price_calc_start();
		}

		catch (...)
		{
			check_start_start();
		}
	}
	
	if (x == "translator") // translator (+)
	{
		try
		{
			string cmd_1 = "/includes/own/test_python_py_translator.py";
			string cmd_11 = "start " + oxdan_dragon_c + cmd_1;
			system(cmd_11.c_str());
			check_start_start();
		}

		catch (...)
		{
			check_start_start();
		}
	}

	else if (x == "stopwatch") // stopwatch (+)
	{

		try
		{
			stopwatch_start();
		}

		catch (...)
		{
			check_start_start();
		}
	}

	else if (x == "webcam_recorder") // webcam_recorder (+)
	{

		try
		{
			webcam_recorder_start();
		}

		catch (...)
		{
			check_start_start();
		}

	}

	else if (x == "dictaphone") // dictaphone (+)
	{

		try
		{
			dictaphone_start();
		}

		catch (...)
		{
			check_start_start();
		}

	}

	else if (x == "timer") // timer (+)
	{

		try
		{
			timer_start();
		}

		catch (...)
		{
			check_start_start();
		}

	}

	else if (x == "cur_conv") // cur_conv (+)
	{

		try
		{
			cur_conv_start();
		}

		catch (...)
		{
			check_start_start();
		}
	}

	else if (x == "calendar") // calendar (+)
	{

		try
		{
			calendar_start();
		}

		catch (...)
		{
			check_start_start();
		}
	}

	else if (x == "calculator") // calculator (+)
	{

		try
		{
			calculator_start();
		}

		catch (...)
		{
			check_start_start();
		}
	}
}