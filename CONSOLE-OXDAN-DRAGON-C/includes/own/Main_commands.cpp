#include <boost/asio.hpp>
#include <windows.h>
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <dirent.h>
#include <direct.h>
#include <sstream>
#include "all_diclarations.h"
#include <process.h>
#include <algorithm>
#include <boost/algorithm/string.hpp>


#pragma warning(disable : 4996).

using namespace std;

void Main_Commands()
{
	if (x == "--version" || x == "-version" || x == "version" || x == "-v") // --version (+)
	{
		try
		{
			printf("\n\033[0;33m Oxdan");
			Sleep(10);
			printf("\033[0;31m Dragon");
			Sleep(10);
			printf("\033[0;37m [ Version: 1.2023 [ENGLISH] (C/C++) [WINDOWS] ] \n");
			Sleep(10);
			printf("(c) Oxdan Praduction. \n");
			Sleep(10);

			check_start_start();
		}

		catch (...)
		{
			check_start_start();
		}
	}

	else if (x == "go_to") // go_to (+)
	{

		if (tokens.size() < 2)
		{
			printf("\033[0;31m");
			printf("\n");
			printf("(!ERROR!)");
			printf("\033[0;37m");
			printf(" = ");
			printf("\033[0;32m");
			printf("(!Enter path to directory!)\n");
			printf("\033[0;37m");
		}

		else
		{
			try
			{
				char buf[256];
				string cd = tokens[1];
				SetCurrentDirectoryA((LPCSTR)cd.c_str());
				GetCurrentDirectoryA(255, buf);

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
				printf("(!Enter path to directory!)\n");
				printf("\033[0;37m");

				check_start_start();
			}
		}

		check_start_start();
	}

	else if (boost::starts_with(writex, "pip")) // pip (+)
	{
		try
		{
			cout << "\n";
			std::istringstream iss(writex);
			std::vector<std::string> args{ std::istream_iterator<std::string>{iss},
										  std::istream_iterator<std::string>{} };

			// Convert vector of strings to command string
			std::ostringstream oss;
			for (const auto& arg : args) {
				oss << arg << " ";
			}

			// Execute the command using popen
			std::string command_string = oss.str();
			FILE* pipe = _popen(command_string.c_str(), "r");
			if (!pipe) {
				perror("popen");
				//return 1;
			}

			// Read and print the output of the command
			char buffer[4096];
			while (fgets(buffer, 4096, pipe)) {
				std::cout << buffer;
			}

			// Close the pipe
			int status = _pclose(pipe);
			if (status == -1) {
				perror("pclose");
				//return 1;
			}

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
			printf("(!Install python-3.10.6!)\n");
			printf("\033[0;37m");

			check_start_start();
		}
	}

	else if (boost::starts_with(writex, "cmd")) // cmd (+)
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
				command.erase(remove(command.begin(), command.end(), "cmd"), command.end());

				string separator = " ";
				string right_command = "";
				for (const string& cmd : command) {
					right_command += separator + cmd;
				}

				if (right_command == "cmd") {
					printf("\033[0;31m");
					printf("\n");
					printf("(!ERROR!)");
					printf("\033[0;37m");
					printf(" = ");
					printf("\033[0;32m");
					printf("(!We're so sorry about that, only cmd command can't be run!)\n");
				}
				else {
					system(right_command.c_str());
					cout << " " << endl;
				}

				cout << " " << endl;

			

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
			printf("(!Check your system. (should be Windows)!)\n");
			printf("\033[0;37m");

			check_start_start();
		}
	}

	else if (boost::starts_with(writex, "git")) // git (+)
	{
		try
		{
			cout << "\n";
			std::istringstream iss(writex);
			std::vector<std::string> args{ std::istream_iterator<std::string>{iss},
										  std::istream_iterator<std::string>{} };

			// Convert vector of strings to command string
			std::ostringstream oss;
			for (const auto& arg : args) {
				oss << arg << " ";
			}

			// Execute the command using popen
			std::string command_string = oss.str();
			FILE* pipe = _popen(command_string.c_str(), "r");
			if (!pipe) {
				perror("popen");
				//return 1;
			}

			// Read and print the output of the command
			char buffer[4096];
			while (fgets(buffer, 4096, pipe)) {
				std::cout << buffer;
			}

			// Close the pipe
			int status = _pclose(pipe);
			if (status == -1) {
				perror("pclose");
				//return 1;
			}

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
			printf("(!Install git!)\n");
			printf("\033[0;37m");

			check_start_start();
		}
	}

	else if (boost::starts_with(writex, "npm")) // npm (+)
	{
		try
		{
			cout << "\n";
			std::istringstream iss(writex);
			std::vector<std::string> args{ std::istream_iterator<std::string>{iss},
										  std::istream_iterator<std::string>{} };

			// Convert vector of strings to command string
			std::ostringstream oss;
			for (const auto& arg : args) {
				oss << arg << " ";
			}

			// Execute the command using popen
			std::string command_string = oss.str();
			FILE* pipe = _popen(command_string.c_str(), "r");
			if (!pipe) {
				perror("popen");
				//return 1;
			}

			// Read and print the output of the command
			char buffer[4096];
			while (fgets(buffer, 4096, pipe)) {
				std::cout << buffer;
			}

			// Close the pipe
			int status = _pclose(pipe);
			if (status == -1) {
				perror("pclose");
				//return 1;
			}

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
			printf("(!Install npm!)\n");
			printf("\033[0;37m");

			check_start_start();
		}
		}

	else if (boost::starts_with(writex, "conda")) // conda (+)
	{
		try
		{
			cout << "\n";
			std::istringstream iss(writex);
			std::vector<std::string> args{ std::istream_iterator<std::string>{iss},
										  std::istream_iterator<std::string>{} };

			// Convert vector of strings to command string
			std::ostringstream oss;
			for (const auto& arg : args) {
				oss << arg << " ";
			}

			// Execute the command using popen
			std::string command_string = oss.str();
			FILE* pipe = _popen(command_string.c_str(), "r");
			if (!pipe) {
				perror("popen");
				//return 1;
			}

			// Read and print the output of the command
			char buffer[4096];
			while (fgets(buffer, 4096, pipe)) {
				std::cout << buffer;
			}

			// Close the pipe
			int status = _pclose(pipe);
			if (status == -1) {
				perror("pclose");
				//return 1;
			}

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
			printf("(!Install miniconda!)\n");
			printf("\033[0;37m");

			check_start_start();
		}
	}

	else if (x == "cls" || x == "clear") // cls/clear (+)
	{
		try
		{
			#ifdef linux
			system("clear");
			#endif

			#ifdef _WIN32
			system("mode 141, 29"); // set size of console (+)
			SetWindow(141, 29); // set buffer size of console (+)
			system("cls");
			#endif

			check_start_start();

		}

		catch (...)
		{
			check_start_start();
		}
	}
	else if (x == "update") // update (+)
	{
		try
		{

				boost::asio::io_context io_context;
				boost::asio::ip::tcp::resolver resolver(io_context);
				boost::asio::ip::tcp::socket socket(io_context);

				std::string host = "raw.githubusercontent.com";
				std::string path = "/Mester-Oxdan/Oxdan-Dragon-Python/main/version";

				boost::asio::ip::tcp::resolver::query query(host, "http");
				boost::asio::ip::tcp::resolver::iterator endpoint_iterator = resolver.resolve(query);

				boost::asio::connect(socket, endpoint_iterator);

				// Form the HTTP request
				std::string request =
					"GET " + path + " HTTP/1.1\r\n"
					"Host: " + host + "\r\n"
					"Connection: close\r\n\r\n";

				// Send the HTTP request
				boost::asio::write(socket, boost::asio::buffer(request));

				// Read the HTTP response
				std::string response;
				boost::asio::streambuf response_buffer;
				boost::asio::read_until(socket, response_buffer, "\r\n");

				// Read and append the rest of the response
				std::istream response_stream(&response_buffer);
				while (!response_stream.eof()) {
					std::string line;
					std::getline(response_stream, line);
					response += line + "\n";
				}

				// Process the response (e.g., check for the version)
				if (response.find("1.2023") != std::string::npos) {
					std::cout << "\n\033[0;33mYou're right!\033[0;37m" << std::endl;
					std::cout << "We have a new version for you: 2.2024" << std::endl;
					std::cout << "If you want to \033[0;32mdownload\033[0;37m it, just go to our website or GitHub." << std::endl;
				}
				else {
					printf("\033[0;31m");
					printf("\n");
					printf("(!ERROR!)");
					printf("\033[0;37m");
					printf(" = ");
					printf("\033[0;32m");
					printf("(!Program already updated to last version!)\n");
					printf("\033[0;37m");
				}


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
			printf("(!Program already updated to last version!)\n");
			printf("\033[0;37m");

			check_start_start();
		}
	}

	else if (x == "dir" || x == "ls") // dir/ls (+)
	{
		try
		{
			DIR* dir;
			struct dirent* ent;
			if ((dir = opendir(buf1)) != NULL) {
				/* print all the files and directories within directory */
				printf("\n\033[0;33mFILES: \n");
				while ((ent = readdir(dir)) != NULL) {

					printf("\033[0;37m%s\n", ent->d_name);
				}
				closedir(dir);
			}
			else {
				/* could not open directory */
				perror("");
				EXIT_FAILURE;
			}
			check_start_start();
		}

		catch (...)
		{
			check_start_start();
		}
	}

	/*else if (x == "install") // install (+) 
	{

		if (tokens.size() < 2)
		{
			printf("\033[0;31m");
			printf("\n");
			printf("(!ERROR!)");
			printf("\033[0;37m");
			printf(" = ");
			printf("\033[0;32m");
			printf("(!Enter install option!)\n");
			printf("\033[0;37m");

			check_start_start();
		}

		else
		{
			try
			{
				char buf[256];
				string name = tokens[1];

				installs_start(name);
			}

			catch (...)
			{

				check_start_start();
			}
		}

		check_start_start();
	}*/

	else if (x == "del" || x == "delete") // del/delete (+)
	{
		try
		{
			if (tokens.size() < 2)
			{
				printf("\033[0;31m");
				printf("\n");
				printf("(!ERROR!)");
				printf("\033[0;37m");
				printf(" = ");
				printf("\033[0;32m");
				printf("(!Enter name for file!)\n");
				printf("\033[0;37m");
			}

			else
			{
				try
				{
					char buf[256];
					string name = tokens[1];

					if (rmdir(name.c_str()) == true)
					{
						check_start_start();
					}

					else if (remove(name.c_str()) == true)
					{
						check_start_start();
					}
				}

				catch (...)
				{
					check_start_start();
				}
			}

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
			printf("(!Enter name for file!)\n");
			printf("\033[0;37m");
		}
	}

	else if (x == "mkdir") // mkdir (+)
	{

		if (tokens.size() < 2)
		{
			printf("\033[0;31m");
			printf("\n");
			printf("(!ERROR!)");
			printf("\033[0;37m");
			printf(" = ");
			printf("\033[0;32m");
			printf("(!Enter name for folder!)\n");
			printf("\033[0;37m");
		}

		else
		{
			try
			{
				char buf[256];
				string name = tokens[1];
				string cmd;
				cmd = "mkdir ";
				cmd += name;
				system(cmd.c_str());
			}

			catch (...)
			{
				check_start_start();
			}
		}

		check_start_start();
	}

	else if (x == "create") // create (+)
	{

		if (tokens.size() < 2)
		{
			printf("\033[0;31m");
			printf("\n");
			printf("(!ERROR!)");
			printf("\033[0;37m");
			printf(" = ");
			printf("\033[0;32m");
			printf("(!Enter name for file!)\n");
			printf("\033[0;37m");
		}

		else
		{
			try
			{
				char buf[256];
				string name = tokens[1];

				string cmd;
				cmd += name;
				ofstream{ cmd };
			}

			catch (...)
			{
				check_start_start();
			}
		}

		check_start_start();
	}
}