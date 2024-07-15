#include <windows.h>
#include <string>
#include <fstream>
#include "all_diclarations.h"

void color_back_start(string name)
{
	if (name == "bl" || name == "BL") // Black (+)
	{
		system("color 07");

		check_start_start();
	}
	else if (name == "r" || name == "R") // Red (+)
	{
		system("color 47");
		
		check_start_start();
	}
	else if (name == "g" || name == "G") // Green (+)
	{
		system("color 27");

		check_start_start();
		
	}
	else if (name == "y" || name == "Y") // Yellow (+)
	{
		system("color 67");
		
		check_start_start();
	}
	else if (name == "b" || name == "B") // Blue (+)
	{
		system("color 17");

		check_start_start();
	}
	else if (name == "p" || name == "P") // Purple (+)
	{
		system("color 57");
		
		check_start_start();
	}
	else if (name == "wb" || name == "WB") // White/Blue (+)
	{
		system("color 37");
		
		check_start_start();
	}
	else if (name == "w" || name == "W") // White (+)
	{
		system("color f7");
		
		check_start_start();
	}
	else // White (+)
	{
		system("color 07");
		
		check_start_start();
	}
}