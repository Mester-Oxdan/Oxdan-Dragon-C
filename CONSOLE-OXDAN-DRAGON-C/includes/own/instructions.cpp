#include <windows.h>
#include <iostream>
#include <conio.h>
#include "all_diclarations.h"

using namespace std;

void instructions()
{
	system("cls");
    std::cout << std::endl;
    Sleep(1);
    std::cout << std::endl;
    Sleep(1);
    std::cout << "\033[0;31m                                                           !RULES!\033[0;37m" << std::endl;
    Sleep(1);
    std::cout << std::endl;
    Sleep(1);
    std::cout << "   First command which you need to know it is \033[0;33m-h\033[0;37m, this command will print all commands which this console have." << std::endl;
    Sleep(1);
    std::cout << std::endl;
    Sleep(1);
    std::cout << "\033[0;31m   !\033[0;33mRemember\033[0;37m, Author (OXDAN) do not care and do not responsible for what you doing." << std::endl;
    Sleep(1);
    std::cout << std::endl;
    Sleep(1);
    std::cout << "   This console intended for learning programing and how it is working, you can see code of this console on (https://github.com/Mester-Oxdan) Author (OXDAN) github." << std::endl;
    Sleep(1);
    std::cout << std::endl;
    Sleep(1);
    std::cout << "\033[0;31m                                            Press any key to go in the main menu.\033[0;37m" << std::endl;
    Sleep(1);
    _getch();
    first_start();
}