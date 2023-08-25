#include <windows.h>
#include <time.h>
#include <iostream>
#include <fstream>
#include <conio.h>
#include "all_diclarations.h"

using namespace std;

void pas_gen_nw_start()
{
	srand(time(0));
	char words[] = { 'Q','W','E','R','T','Y','U','I','O','P','A','S','D','F','G','H','J','K','L','Z','X','C','V','B','N','M','q','w','e',
	 'r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m','1','2','3','4','5','6',
	 '7','8','9','0',' ' };

	//unsigned short Pas, Char, size = sizeof(words) / sizeof(words[0]);
	string Pas, Char;
	int size = sizeof(words) / sizeof(words[0]);

	printf("\n\033[0;31mWrite 'esc' (for exit) \033[0;37m");
	cout << "\n\033[0;33mEnter Number of passwords: \033[0;37m";
	cin >> Pas;

	if (Pas == "esc")
	{
		check_start_start();
	}

	if (stoi(Pas) == 0)
	{
		//if (!(isNumber6(to_string(Pas))))
		//{
		printf("\033[0;31m");
		printf("\n");
		printf("(!ERROR!)");
		printf("\033[0;37m");
		printf(" = ");
		printf("\033[0;32m");
		printf("(!Only integers!)\n");
		printf("\033[0;37m");
		cin.clear();
		cin.ignore();
		_getch();

		check_start_start();

		//}
	}

	cout << "\n\033[0;33mEnter Number of chars in passwords: \033[0;37m";
	cin >> Char;

	if (Char == "esc")
	{
		check_start_start();
	}

	if (stoi(Char) == 0)
	{
		//if (!(isNumber6(to_string(Pas))))
		//{
		printf("\033[0;31m");
		printf("\n");
		printf("(!ERROR!)");
		printf("\033[0;37m");
		printf(" = ");
		printf("\033[0;32m");
		printf("(!Only integers!)\n");
		printf("\033[0;37m");
		cin.clear();
		cin.ignore();
		_getch();

		check_start_start();

		//}
	}

	int Pas_pas = stoi(Pas);
	int Char_pas = stoi(Char);

	const unsigned short saveChar = Char_pas;

	ofstream outFile("Pass_Gen_NW.txt");
	cout << "\n";
	for (; Pas_pas > 0; Pas_pas--)
	{
		for (; Char_pas > 0; Char_pas--)
		{
			outFile << words[rand() % size];
			cout << words[rand() % size];
		}

		if (Char_pas == 0)
		{
			Char_pas = saveChar;
			outFile << endl;
			cout << endl;
		}
	}
	outFile.close();

	check_start_start();
}