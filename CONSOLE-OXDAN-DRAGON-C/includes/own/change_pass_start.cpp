#include <windows.h>
#include <iostream>
#include <conio.h>
#include <fstream>
#include <boost/algorithm/string.hpp>
#include "all_diclarations.h"

#pragma warning(disable : 4996).

using namespace std;

void change_pass_start()
{
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    string username, currentPass, newPass1, newPass2;
    system("cls");
    gotoxy(46, 8);
    cout << "\033[0;31mEnter 'esc' (for exit) \033[0;37m";
    gotoxy(49, 9);
    cout << "\033[0;31mCHANGE PASSWORD: \033[0;37m";

    // USERNAME INPUT
    SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_GREEN);
    gotoxy(50, 11);
    cout << "USERNAME: ";
    SetConsoleTextAttribute(hStdOut, FOREGROUND_RED);
    cin >> username;
    boost::to_lower(username);
    boost::trim(username);
    if (username == "esc") first_start();

    // CURRENT PASSWORD INPUT
    SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_GREEN);
    gotoxy(50, 12);
    cout << "CURRENT PASSWORD: ";
    SetConsoleTextAttribute(hStdOut, FOREGROUND_RED);
    cin >> currentPass;
    boost::to_lower(currentPass);
    boost::trim(currentPass);
    if (currentPass == "esc") first_start();

    // Encode current password for comparison
    string encodedCurrent = currentPass;
    for (int i = 0; i < encodedCurrent.length(); i++)
        encodedCurrent[i] += 87;

    // LOAD USER DATA
    vector<pair<string, string>> users;
    bool userFound = false;
    ifstream input(oxdan_dragon_c + "\\includes\\own\\resuorces\\all_txt\\login_data_base.txt");
    string u, p;
    while (input >> u >> p)
    {
        if (u == username && p == encodedCurrent)
        {
            userFound = true;
            users.emplace_back(u, ""); // Placeholder for new password
        }
        else
        {
            users.emplace_back(u, p);
        }
    }
    input.close();

    if (!userFound)
    {
        gotoxy(50, 14);
        printf("\033[0;31m\n                                         (!ERROR!)");
        printf("\033[0;37m = \033[0;32m(!Invalid username or password!)\033[0;37m\n");
        getch();
        first_start();
        return;
    }

    // NEW PASSWORD INPUT
    SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_GREEN);
    gotoxy(50, 13);
    cout << "NEW PASSWORD: ";
    SetConsoleTextAttribute(hStdOut, FOREGROUND_RED);
    cin >> newPass1;
    boost::to_lower(newPass1);
    boost::trim(newPass1);
    if (newPass1 == "esc") first_start();

    gotoxy(50, 14);
    cout << "REPEAT PASSWORD: ";
    cin >> newPass2;
    boost::to_lower(newPass2);
    boost::trim(newPass2);
    if (newPass2 == "esc") first_start();

    if (newPass1 != newPass2)
    {
        gotoxy(50, 16);
        printf("\033[0;31m\n                                         (!ERROR!)");
        printf("\033[0;37m = \033[0;32m(!Passwords do not match!)\033[0;37m\n");
        getch();
        first_start();
        return;
    }

    // ENCODE AND UPDATE PASSWORD
    string encodedNew = newPass1;
    for (int i = 0; i < encodedNew.length(); i++)
        encodedNew[i] += 87;

    for (auto& pair : users)
    {
        if (pair.first == username)
        {
            pair.second = encodedNew;
            break;
        }
    }

    // WRITE UPDATED DATA
    ofstream output(oxdan_dragon_c + "\\includes\\own\\resuorces\\all_txt\\login_data_base.txt", ios::trunc);
    for (const auto& pair : users)
    {
        output << pair.first << ' ' << pair.second << endl;
    }
    output.close();

    // SUCCESS
    gotoxy(45, 16);
    cout << "\033[0;32m!PASSWORD CHANGED SUCCESSFULLY!\033[0;37m";
    _getch();
    first_start();
}
