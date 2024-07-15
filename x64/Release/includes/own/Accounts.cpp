#include <windows.h>
#include <iostream>
#include <string>
#include <boost/algorithm/string.hpp>
#include "all_diclarations.h"

using namespace std;

void Accounts()
{

	if (x == "login") // login (+)
	{
		try
		{
			login();
		}

		catch (...)
		{
			check_start_start();
		}
	}

	else if (x == "registration") // registration (+)
	{
		try
		{
			registration();
		}

		catch (...)
		{
			check_start_start();
		}
	}

	else if (x == "instructions") // instructions (+)
	{
		try
		{
			instructions();
		}

		catch (...)
		{
			check_start_start();
		}
	}

	else if (x == "del_account") // del_account (+)
	{
		try
		{
			del_account_start();
		}

		catch (...)
		{
			check_start_start();
		}
	}

	else if (x == "logout") // logout (+)
	{

		try
		{
			first_start();
		}

		catch (...)
		{
			check_start_start();
		}
	}
}