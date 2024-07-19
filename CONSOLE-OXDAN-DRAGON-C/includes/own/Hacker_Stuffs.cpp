#include <windows.h>
#include <iostream>
#include <vector>
#include <string>
#include "all_diclarations.h"
#include <shlobj_core.h>
#include <boost/algorithm/string.hpp>

using namespace std;

void Hacker_Stuffs()
{
	if (x == "injector_dll") // injector_dll (+)
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

	else if (x == "phone_search") // phone_search (+)
	{
		try
		{
			string cmd_gh = "start ";
			cmd_gh += oxdan_dragon_c;
			cmd_gh += "\\includes\\own\\test_python_phone_number.py"; //test_python_phone_number.py
			system(cmd_gh.c_str());
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
			printf("(!Enter phone number with country code!)\n");
			printf("\033[0;37m");
			check_start_start();
		}

	}

	else if (x == "stealer") // stealer (+)
	{
		try
		{
			if (IsUserAnAdmin() == true)
			{
				string cmd_ygt = "start ";
				cmd_ygt += oxdan_dragon_c;
				cmd_ygt += "\\includes\\own\\includes\\importnt_folder\\start_2.bat";
				system(cmd_ygt.c_str());
				cout << "\nCopying files was \033[0;32msuccessfuly\033[0;37m finished in CONSOLE-OXDAN-DRAGON-C dir.\n";
				check_start_start();
			}

			else if (IsUserAnAdmin() == false)
			{
				printf("\033[0;31m");
				printf("\n");
				printf("(!ERROR!)");
				printf("\033[0;37m");
				printf(" = ");
				printf("\033[0;32m");
				printf("(!Run console as admin!)\n");
				printf("\033[0;37m");
				check_start_start();
			}
			
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

	else if (x == "john_3") // john (+)
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

	else if (boost::starts_with(writex, "john")) // john (+)
	{
		try
		{

			cout << " " << endl;
			// Split the input into a vector of strings

			vector<string> command;
			string word;
			for (char c : writex) {
				if (c == ' ') {
					command.push_back(word);
					word = "";
				}
				else {
					word += c;
				}
			}
			if (!word.empty()) {
				command.push_back(word);
			}

			// Remove "cmd" from the command vector
			command.erase(remove(command.begin(), command.end(), "john"), command.end());

			string separator = " ";
			string right_command = "";
			right_command += oxdan_dragon_c + "\\includes\\own\\includes\\john_the_ripper\\run\\john.exe ";

			for (const string& cmd : command) {
				right_command += separator + cmd;
			}

			system(right_command.c_str());
			//cout << " " << endl;


			//cout << " " << endl;



			check_start_start();

		}

		catch (...)
		{

			check_start_start();
		}
	}

	else if (boost::starts_with(writex, "nmap")) // nmap (+)
	{
		try
		{

			cout << " " << endl;
			// Split the input into a vector of strings

			vector<string> command;
			string word;
			for (char c : writex) {
				if (c == ' ') {
					command.push_back(word);
					word = "";
				}
				else {
					word += c;
				}
			}
			if (!word.empty()) {
				command.push_back(word);
			}

			// Remove "cmd" from the command vector
			//command.erase(remove(command.begin(), command.end(), "nmap"), command.end());

			string separator = " ";
			string right_command = "";
			//right_command += oxdan_dragon_c + "\\includes\\own\\includes\\john_the_ripper\\run\\john.exe ";

			for (const string& cmd : command) {
				right_command += separator + cmd;
			}

			system(right_command.c_str());
			//cout << " " << endl;


			//cout << " " << endl;



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
			printf("(!Install nmap-7.94-setup!)\n");
			printf("\033[0;37m");
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