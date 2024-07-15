#include <windows.h>
#include <iostream>
#include <conio.h>
#include <string.h>
#include <fstream>
#include "all_diclarations.h"

#pragma warning(disable : 4996).

using namespace std;

HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

bool isNumber(string s)
{
	for (int i = 0; i < s.length(); i++)
		if (isdigit(s[i]) == false)
			return false;

	return true;
}

bool found_password = false;

void ask()
{
	while (true)
	{
		found_password == true;
		string option;
		system("cls");
		SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_GREEN);
		gotoxy(50, 7);
		cout << "\033[0;32m!LOGIN SUCESSFUL!\033[0;37m" << endl;
		SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_GREEN);
		gotoxy(50, 9);
		cout << "1) Add email" << endl;
		gotoxy(50, 10);
		cout << "2) Add phone number" << endl;
		gotoxy(50, 11);
		cout << "3) Skip" << endl;
		gotoxy(50, 13);
		cout << "Enter option: ";
		SetConsoleTextAttribute(hStdOut, FOREGROUND_RED);
		cin >> option;

			if (isNumber(option))
			{

				if (option == "1")
				{
					string email, ru, rp;
					system("cls");
					gotoxy(50, 12);
					SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_GREEN);
					cout << "EMAIL: ";
					SetConsoleTextAttribute(hStdOut, FOREGROUND_RED);
					cin >> email;

					string keyemail = email;

					for (int i = 0; i < keyemail.length(); i++)
					{
						keyemail[i] += 87;
					}

					try
					{
						string u, p;
						ifstream input("\\resuorces\\all_txt\\email_data_base.txt");

						bool emali = true;

						while (input >> p)
						{
							for (int i = 0; i < p.length(); i++)
							{
								p[i] -= 87;
							}

							if (p == email)
							{
								emali == false;
								gotoxy(50, 13);
								printf("\033[0;31m");
								printf("\n");
								printf("                                         (!ERROR!)");
								printf("\033[0;37m");
								printf(" = ");
								printf("\033[0;32m");
								printf("(!Email already exist!)\n");
								printf("\033[0;37m");
								getch();
								ask();
								system("cls");
							}

						}
						input.close();

						if (emali == true)
						{
							ofstream reg("\\resuorces\\all_txt\\email_data_base.txt", ios::app);
							reg << keyemail << ' ' << endl;
							gotoxy(47, 14);
							cout << "\033[0;32m!EMAIL SUCESSFUL!\033[0;37m";
							_getch();
							ask();
						}
					}

					catch (...)
					{
						ofstream reg("\\resuorces\\all_txt\\email_data_base.txt", ios::app);
						reg << keyemail << ' ' << endl;
						gotoxy(47, 14);
						cout << "\033[0;32m!EMAIL SUCESSFUL!\033[0;37m";
						_getch();
						ask();
					}

					ofstream reg("\\resuorces\\all_txt\\email_data_base.txt", ios::app);
					reg << keyemail << ' ' << endl;
					gotoxy(47, 14);
					cout << "\033[0;32m!EMAIL SUCESSFUL!\033[0;37m";
					_getch();
					ask();
				}

				if (option == "2")
				{
					string phonenumber, ru, rp;
					system("cls");
					gotoxy(50, 12);
					SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_GREEN);
					cout << "PHONE NUMBER: ";
					SetConsoleTextAttribute(hStdOut, FOREGROUND_RED);
					cin >> phonenumber;

					string keyphonenumber = phonenumber;

					for (int i = 0; i < keyphonenumber.length(); i++)
					{
						keyphonenumber[i] += 87;
					}

					try
					{
						string u, p4;
						ifstream input("\\resuorces\\all_txt\\phone_number_data_base.txt");

						bool phona = true;

						while (input >> p4)
						{
							for (int i = 0; i < p4.length(); i++)
							{
								p4[i] -= 87;
							}

							if (p4 == phonenumber)
							{
								phona == false;
								gotoxy(50, 13);
								printf("\033[0;31m");
								printf("\n");
								printf("                                         (!ERROR!)");
								printf("\033[0;37m");
								printf(" = ");
								printf("\033[0;32m");
								printf("(!Phone number already exist!)\n");
								printf("\033[0;37m");
								getch();
								ask();
								system("cls");
							}

						}
						input.close();

						if (phona == true)
						{
							ofstream reg("\\resuorces\\all_txt\\phone_number_data_base.txt", ios::app);
							reg << keyphonenumber << ' ' << endl;
							gotoxy(45, 14);
							cout << "\033[0;32m!PHONE NUMBER SUCESSFUL!\033[0;37m";
							getch();
							ask();
						}
					}

					catch (...)
					{
						ofstream reg("\\resuorces\\all_txt\\phone_number_data_base.txt", ios::app);
						reg << keyphonenumber << ' ' << endl;
						gotoxy(45, 14);
						cout << "\033[0;32m!PHONE NUMBER SUCESSFUL!\033[0;37m";
						getch();
						ask();
					}

					ofstream reg("\\resuorces\\all_txt\\phone_number_data_base.txt", ios::app);
					reg << keyphonenumber << ' ' << endl;
					gotoxy(45, 14);
					cout << "\033[0;32m!PHONE NUMBER SUCESSFUL!\033[0;37m";
					getch();
					ask();

				}

				if (option == "3")
				{
					system("cls");
					printf("\033[0;33mOxdan"); // intro cmd (+)
					printf("\033[0;31m Dragon");
					printf("\033[0;37m [ Version: 1.2023 [ENGLISH] (C/C++) [WINDOWS] ] \n");
					printf("(p) Oxdan Praduction. \n");
					start_start(true);
				}

			}

			if (!(isNumber(option)))
			{
				gotoxy(50, 15);
				printf("\033[0;31m");
				printf("\n");
				printf("                                         (!ERROR!)");
				printf("\033[0;37m");
				printf(" = ");
				printf("\033[0;32m");
				printf("(!Only integers!)\n");
				printf("\033[0;37m");
				getch();
				system("cls");
				ask();
			}

			if (option > "3" || option < "1")
			{
				gotoxy(50, 15);
				printf("\033[0;31m");
				printf("\n");
				printf("                                         (!ERROR!)");
				printf("\033[0;37m");
				printf(" = ");
				printf("\033[0;32m");
				printf("(!Out of range!)\n");
				printf("\033[0;37m");
				getch();
				system("cls");
				ask();
			}

			else
			{
				gotoxy(50, 15);
				printf("\033[0;31m");
				printf("\n");
				printf("                                         (!ERROR!)");
				printf("\033[0;37m");
				printf(" = ");
				printf("\033[0;32m");
				printf("(!Enter option!)\n");
				printf("\033[0;37m");
				getch();
				system("cls");
				ask();
			}
	}
}

void login()
{
	int count = 0;
	string user, pass, u, p;
	system("cls");
	gotoxy(46, 8);
	cout << "\033[0;31mWrite 'esc' (for exit) \033[0;37m";
	gotoxy(51, 9);
	cout << "\033[0;31mLOGIN: \033[0;37m";
	SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_GREEN);
	gotoxy(50, 11);
	cout << "USERNAME: ";
	SetConsoleTextAttribute(hStdOut, FOREGROUND_RED);
	cin >> user;

	if (user == "esc")
	{
		first_start();
	}

	SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_GREEN);
	gotoxy(50, 12);
	cout << "PASSWORD: ";
	SetConsoleTextAttribute(hStdOut, FOREGROUND_RED);
	cin >> pass;
	if (pass == "esc")
	{
		first_start();
	}

	ifstream input("resuorces\\all_txt\\login_data_base.txt");
	while (input >> u >> p)
	{

		for (int i = 0; i < p.length(); i++)
		{
			p[i] -= 87;
		}

		if (u == user && p == pass)
		{
			found_password = true;
			count = 1;
			system("cls");
		}

		if (p == pass && u != user)
		{
			found_password = true;
			gotoxy(50, 14);
			printf("\033[0;31m");
			printf("\n");
			printf("                                         (!ERROR!)");
			printf("\033[0;37m");
			printf(" = ");
			printf("\033[0;32m");
			printf("(!Wrong username!)\n");
			printf("\033[0;37m");
			getch();
			first_start();
			//system("cls");
		}

		if (u == user && p != pass)
		{
			found_password = true;
			gotoxy(50, 14);
			printf("\033[0;31m");
			printf("\n");
			printf("                                         (!ERROR!)");
			printf("\033[0;37m");
			printf(" = ");
			printf("\033[0;32m");
			printf("(!Wrong password!)\n");
			printf("\033[0;37m");
			getch();
			first_start();
			//system("cls");
		}

		else
		{
			continue;
		}

	}
	input.close();

	if (count == 1)
	{
		found_password = true;
		ask();
	}

	if (found_password == false)
	{
		gotoxy(50, 14);
		printf("\033[0;31m");
		printf("\n");
		printf("                                         (!ERROR!)");
		printf("\033[0;37m");
		printf(" = ");
		printf("\033[0;32m");
		printf("(!Account did not found!)\n");
		printf("\033[0;37m");
		getch();
		first_start();
	}
}