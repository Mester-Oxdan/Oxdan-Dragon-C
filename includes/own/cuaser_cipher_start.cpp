#include <stdio.h>//необходимо для printf
#include <conio.h>//необходимо для getch
#include <string.h>//необходимо для puts
#include <windows.h>
#include <iostream>
#include <time.h>
#include <cstdlib>
#include "all_diclarations.h"

using namespace std;

#pragma warning(disable : 4996).

/*инициализируем переменные*/
int i87 = 0, n87 = 0, k98;
int d87;
char alf[] = "abcedfghijklmnopqrstuvwxyz0123456789#!@$%^&*-+=";//словарь
char buf[10];//массив для ввода сообщения
char decod[10];//массив для ввода сообщения

void cuaser_cipher_start()
{
	try
	{

		while (true)
		{
			system("cls");
			string op;

			cout << "\n\033[0;31mWrite esc (for exit) \033[0;37m\n";
			cout << "\033[0;33m(1) Encryption (2) Decryption: \033[0;37m";

			cin >> op;

			if (op == "1")
			{
				system("cls");
				printf("\n\033[0;33mEnter text: \033[0;37m");
				Sleep(1);
				scanf("%s", &buf);//ввод слова или цифр
				printf("\n\033[0;33mEnter key: \033[0;37m");
				Sleep(1);
				scanf("%i", &k98);//вводим ключ
				for (n87 = 0; n87 < 10; n87++)
				{
					for (i87 = 0; i87 < 47; i87++)
					{
						if (buf[n87] == alf[i87])
						{
							if (i87 >= 47)
								buf[n87] = alf[i87 - 47];
							else
								buf[n87] = alf[i87 + k98];//сдвигаем вправо на показания шага ключа
							break;//принудительно выходим из цикла
						}
					}
				}
				printf(buf);//выводим полученный шифр
				_getch();
				cuaser_cipher_start();
			}

			else if (op == "esc")
			{
				check_start_start();
			}

			else if (op == "2")
			{
				system("cls");
				/*Процедура дешифрования ввод*/

				printf("\n\033[0;33mEnter text: \033[0;37m");
				Sleep(1);
				scanf("%s", &decod);//вводим шифр
				printf("\n\033[0;33mEnter key: \033[0;37m");
				Sleep(1);
				scanf("%i", &d87);//вводим ключ
				for (n87 = 0; n87 < 10; n87++)
				{
					for (i87 = 0; i87 < 47; i87++)
					{
						if (decod[n87] == alf[i87])
						{
							if (i87 >= 47)
								decod[n87] = alf[i87 - 47];
							else
								decod[n87] = alf[i87 - d87];//сдвигаем влево на показания шага ключа
							break;//принудительно выходим из цикла
						}
					}
				}

				puts(decod);//выводим код
				getch();//задержка программы
				cuaser_cipher_start();
			}
		}
	}

	catch (...)
	{
		cuaser_cipher_start();
	}
}