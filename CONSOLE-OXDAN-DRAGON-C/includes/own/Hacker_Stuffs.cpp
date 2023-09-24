#include <windows.h>
#include <iostream>
#include <vector>
#include <string>
#include "all_diclarations.h"

using namespace std;

void Hacker_Stuffs()
{
	if (x == "inject_prog") // inject_prog (+)
	{
		try
		{
			inject_prog_start();
		}

		catch (...)
		{
			check_start_start();
		}
	}

	else if (x == "cor_desk") // cor_desk (+)
	{
		try
		{
			cor_desk_start();
		}

		catch (...)
		{
			check_start_start();
		}

	}

	else if (x == "mimikatz") // mimikatz (+)
	{
		try
		{
			printf("\n");
			string cmd_io = oxdan_dragon_c + "\\includes\\own\\includes\\mimikatz-master\\mimikatz-master\\x64\\mimikatz.exe";
			system(cmd_io.c_str());
			//printf(cmd_io.c_str());
			check_start_start();
		}

		catch (...)
		{
			check_start_start();
		}

	}

	else if (x == "john_the_ripper") // john_the_ripper (+)
	{
		try
		{
			printf("\n");
			string cmd_io = oxdan_dragon_c + "\\includes\\own\\includes\\john_the_ripper\\run\\john.exe";
			system(cmd_io.c_str());
			//printf(cmd_io.c_str());
			check_start_start();
		}

		catch (...)
		{
			check_start_start();
		}

	}

	else if (x == "con_wifi") // con_wifi (+)
	{
		try
		{
			con_wifi_start();
			check_start_start();
		}

		catch (...)
		{
			printf("\033[0;31m");
			printf("\n");
			printf("(!ERROR!)");
			printf("\033[0;37m");
			printf(" = ");
			printf("\033[0;32m");
			printf("(!Enter valid information!)\n");
			printf("\033[0;37m");
			check_start_start();
		}

	}

	else if (x == "wifi_hack") // wifi_hack (+)
	{
		try
		{
			wifi_hack_start();
			check_start_start();
		}

		catch (...)
		{
			printf("\033[0;31m");
			printf("\n");
			printf("(!ERROR!)");
			printf("\033[0;37m");
			printf(" = ");
			printf("\033[0;32m");
			printf("(!Enter valid information!)\n");
			printf("\033[0;37m");
			check_start_start();
		}

	}

	else if (x == "ascii_code") // ascii_code (+)
	{
		try
		{
			ascii_code_start();
		}

		catch (...)
		{
			check_start_start();
		}
	}

	else if (x == "morse_code") // morse_code (+)
	{
		try
		{
			morse_code_start();
		}

		catch (...)
		{
			check_start_start();
		}
	}

	else if (x == "caesar_cipher") // caesar_cipher (+)
	{
		try
		{
			cuaser_cipher_start();
		}

		catch (...)
		{
			check_start_start();
		}
	}

	else if (x == "my_wifi_pas") // my_wifi_pas (+)
	{
		try
		{
			my_wifi_pas_start();
		}

		catch (...)
		{
			check_start_start();
		}
	}

	else if (x == "get_ip_website") // get_ip_website (+)
	{
		try
		{

			char buf[256];
			string fert = tokens[1];

			WSADATA d;
			if (WSAStartup(MAKEWORD(2, 2), &d) != 0) {
				fprintf(stderr, "Failed to initialize.\n");
				1;
			}

			string hostname = fert; // char
			struct hostent* host;
			if ((host = gethostbyname(hostname.c_str())) == NULL) {
				printf("\033[0;31m");
				printf("\n");
				printf("(!ERROR!)");
				printf("\033[0;37m");
				printf(" = ");
				printf("\033[0;32m");
				printf("(!Site not found!)\n");
				printf("\033[0;37m");
				check_start_start();
				
			}

			cout << "\n\033[0;33mIp address of \033[0;37m" << fert << " \033[0;33mis:\033[0;37m " << inet_ntoa(*(struct in_addr*)host->h_addr_list[0]) << "\n";

			WSACleanup();

			check_start_start();
		}

		catch (...)
		{
			printf("\033[0;31m");
			printf("\n");
			printf("(!ERROR!)");
			printf("\033[0;37m");
			printf(" = ");
			printf("\033[0;32m");
			printf("(!Site not found!)\n");
			printf("\033[0;37m");
			check_start_start();
		}
	}

	else if (x == "auto_clicker") // auto_clicker (+)
	{
		try
		{
			auto_clicker_start();
		}

		catch (...)
		{
			check_start_start();
		}
	}

	else if (x == "ip_search") // ip_search (+)
	{
		try
		{
			ip_search_start();
		}

		catch (...)
		{
			printf("\033[0;31m");
			printf("\n");
			printf("(!ERROR!)");
			printf("\033[0;37m");
			printf(" = ");
			printf("\033[0;32m");
			printf("(!Enter network ip address!)\n");
			printf("\033[0;37m");
			check_start_start();
		}
	}

	else if (x == "pas_gen") // pas_gen (+)
	{
		if (tokens.size() < 2)
		{
			printf("\033[0;31m");
			printf("\n");
			printf("(!ERROR!)");
			printf("\033[0;37m");
			printf(" = ");
			printf("\033[0;32m");
			printf("(!Enter pas_gen option!)\n");
			printf("\033[0;37m");

			check_start_start();
		}

		else
		{
			char buf[256];
			string name = tokens[1];

			if (name == "w" || name == "W") // pas gen w (+)
			{
				try
				{
					pas_gen_w_start();
				}

				catch (...)
				{
					check_start_start();
				}
			}
			else if (name == "u" || name == "U") // pas gen u (+)
			{
				try
				{
					pas_gen_u_start();
				}

				catch (...)
				{
					check_start_start();
				}
			}

			else if (name == "nw" || name == "NW") // pas gen nw (+)
			{
				try
				{
					pas_gen_nw_start();
				}

				catch (...)
				{
					check_start_start();
				}
			}

			else if (name == "n" || name == "N")
			{
				try
				{
					pas_gen_n_start();
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
				printf("(!Enter pas_gen option!)\n");
				printf("\033[0;37m");

				check_start_start();
			}
		}
	}
}