#include <windows.h>
#include "all_diclarations.h"

void energy_start()
{
	SYSTEM_POWER_STATUS spsPwr;

	// Gets the system power status 
	GetSystemPowerStatus(&spsPwr);

	if (spsPwr.BatteryLifePercent < 50)
	{
		// Prints battery percentage 
		printf("\nBattery percentage: \033[0;31m%d\n", spsPwr.BatteryLifePercent);
		Sleep(1);
	}

	if (spsPwr.BatteryLifePercent > 50)
	{
		// Prints battery percentage 
		printf("\nBattery percentage: \033[0;32m%d\n", spsPwr.BatteryLifePercent);
		Sleep(1);
	}

	if (GetSystemPowerStatus(&spsPwr) == true)
	{
		// Prints power plugged in or not 
		printf("\033[0;37mPower plugged in: \033[0;32myes\n",
			spsPwr.ACLineStatus);
		Sleep(1);
	}

	if (GetSystemPowerStatus(&spsPwr) == false)
	{
		// Prints power plugged in or not 
		printf("\033[0;37mPower plugged in: \033[0;31mno\n",
			spsPwr.ACLineStatus);
		Sleep(1);
	}

	// Prints battery life time 
	printf("\033[0;37mBattery left: %d:%d:%d\n",
		spsPwr.BatteryLifeTime / 3600,
		(spsPwr.BatteryLifeTime % 3600) / 60,
		spsPwr.BatteryLifeTime % 60);
	Sleep(1);

	check_start_start();
}