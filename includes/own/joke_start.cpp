#include <windows.h>
#include <time.h>
#include "all_diclarations.h"

void changeVolumeret()
{
	INPUT ip = { 0 };
	ip.type = INPUT_KEYBOARD;
	ip.ki.wVk = VK_VOLUME_UP;   //or VOLUME_DOWN or MUTE
	SendInput(1, &ip, sizeof(INPUT));
	ip.ki.dwFlags = KEYEVENTF_KEYUP;
	SendInput(1, &ip, sizeof(INPUT));
}

void joke_start(string name)
{
	try
	{
		joke_all_start(name);
		joke_ph_start(name);
		joke_v_start(name);
		joke_au_start(name);
	}

	catch(...)
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

}