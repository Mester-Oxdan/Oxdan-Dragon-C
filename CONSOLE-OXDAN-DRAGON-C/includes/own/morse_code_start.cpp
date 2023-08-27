#include <iostream>
#include <string.h>
#include <string>
#include <conio.h>
#include <windows.h>
#include <stdio.h>
#include "all_diclarations.h"

#pragma warning(disable : 4996).

using namespace std;

struct Pairs
{
    char Letter;
    string Pattern;
};

void CheckLetter(Pairs pr[], char c)
{
    for (int k = 0; k < 27; k++)     //this loop will loop on the array to find the character and print its corresponding ciphered pattern
    {
        if (c == pr[k].Letter)
        {
            cout << pr[k].Pattern << " ";
        }
    }
}

void CheckPattern(Pairs pr[], string temp)
{
    for (int j = 0; j < 26; j++)     //this loop will loop on the array to find the pattern and print its corresponding deciphered character
    {
        if (temp == pr[j].Pattern)
        {
            cout << pr[j].Letter;
        }
    }
}

Pairs pr[] = { {'a',".-"},{'b',"-..."},{'c',"-.-."},{'d',"-.."},{'e',"."},{'f',"..-."},{'g',"--."},{'h',"...."},{'i',".."},{'j',".---"},{'k',"-.-"},{'l',".-.."},{'m',"--"},{'n',"-."},{'o',"---"},{'p',".--."},{'q',"--.-"},{'r',".-."},{'s',"..."},{'t',"-"},{'u',"..-"},{'v',"...-"},{'w',".--"},{'x',"-..-"},{'y',"-.--"},{'z',"--.."},{' '," "} };

void morse_code_start()
{
    try
    {

        while (true)
        {
            system("cls");
            string op;

            cout << "\n\033[0;31mWrite esc (for exit) \033[0;37m\n";
            cout << "\033[0;33m(1) Morse to English (2) English to Morse: \033[0;37m";

            cin >> op;

            if (op == "2")
            {
                string sentence;
                system("cls");
                cout << "\033[0;33mEnter text to cipher: \033[0;37m";
                cin.ignore();
                getline(cin, sentence);

                for (int i = 0; i < sentence.size(); i++)     //this loop will loop on the sentence and take each character and then go to CheckLetter function to find its corresponding pattern
                {
                    char c = tolower(sentence[i]);     //this function will change any uppercase letter into its lowercase
                    CheckLetter(pr, c);
                }
                _getch();
            }

            else if (op == "esc")
            {
                check_start_start();
            }

            else if (op == "1")
            {
                string pattern = "";
                system("cls");
                cout << "\033[0;33mEnter text to decipher: \033[0;37m";
                cin.ignore();
                getline(cin, pattern);
                pattern = pattern + ' ';
                string temp = "";

                for (int i = 0; i < pattern.size(); i++)     //this loop will loop on the string and take each pattern and then go to CheckPattern function to find its corresponding letter
                {

                    if (pattern[i] == ' ')        //when we find a space we take the pattern before it and search for its corresponding letter
                    {
                        CheckPattern(pr, temp);

                        temp = "";
                        if (i != pattern.size() - 1)
                        {
                            if (pattern[i + 1] == ' ' && pattern[i + 2] == ' ')    //if the program founds 2 spaces after a space it prints a space
                            {

                                cout << " ";
                            }
                        }


                        continue;
                    }


                    temp += pattern[i];

                }
                _getch();
            }

            else
            {

                morse_code_start();
            }
        }
    }

    catch (...)
    {

        morse_code_start();
    }
    
}