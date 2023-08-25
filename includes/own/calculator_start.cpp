﻿#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <stack>
#include <iomanip>
#include <sstream>
#include <conio.h>
#include "all_diclarations.h"

#pragma warning(disable : 4996).

using namespace std;

const double Pi = acos(-1); //Объявляем значение числа Пи

double Sin(double x) { //Функция для округления значение синуса
	return (round(sin(x) * 10000000) / 10000000);
}

double Cos(double x) { //Функция для округления значение косинуса
	return (round(cos(x) * 10000000) / 10000000);
}

double Ctg(double x) { //Функция для расчета котангенса
	double a = cos(x);
	double b = Sin(x);
	return (a / b);
}

struct Leksema //Структура, описывающая любое число или операцию
{
	char type; // 0 для чисел, "+" для операции сложения и т.д.
	double value; //Значение (только для чисел). У операций значение всегда "0"
};

bool Maths(stack <Leksema>& Stack_n, stack <Leksema>& Stack_o, Leksema& item) { //Математическая функция, которая производит расчеты
	//Функция имеет тип bool, чтобы при возникновении какой-либо ошибки возвращать "false"
	double a, b, c;
	a = Stack_n.top().value; //Берется верхнее число из стека с числами
	Stack_n.pop(); //Удаляется верхнее число из стека с числами
	switch (Stack_o.top().type) {  //Проверяется тип верхней операции из стека с операциями
	case '+': //Если тип верхней операции из стека с операциями сложение
		b = Stack_n.top().value;
		Stack_n.pop();
		c = a + b;
		item.type = '0';
		item.value = c;
		Stack_n.push(item); //Результат операции кладется обратно в стек с числами
		Stack_o.pop();
		break;

	case '-':
		b = Stack_n.top().value;
		Stack_n.pop();
		c = b - a;
		item.type = '0';
		item.value = c;
		Stack_n.push(item);
		Stack_o.pop();
		break;

	case '^':
		b = Stack_n.top().value;
		Stack_n.pop();
		c = pow(b, a);
		item.type = '0';
		item.value = c;
		Stack_n.push(item);
		Stack_o.pop();
		break;

	case '*':
		b = Stack_n.top().value;
		Stack_n.pop();
		c = a * b;
		item.type = '0';
		item.value = c;
		Stack_n.push(item);
		Stack_o.pop();
		break;

	case '/':
		b = Stack_n.top().value;
		if (a == 0) {
			cerr << "\nYou can't divide by 0!\n";
			return false;
		}
		else {
			Stack_n.pop();
			c = (b / a);
			item.type = '0';
			item.value = c;
			Stack_n.push(item);
			Stack_o.pop();
			break;
		}

	case 's':
		c = Sin(a);
		item.type = '0';
		item.value = c;
		Stack_n.push(item);
		Stack_o.pop();
		break;

	case 'c':
		c = Cos(a);
		item.type = '0';
		item.value = c;
		Stack_n.push(item);
		Stack_o.pop();
		break;

	case 't':
		if (Cos(a) == 0) {
			cerr << "\nWrong argument for tangent!\n";
			return false;
		}
		else {
			c = tan(a);
			item.type = '0';
			item.value = c;
			Stack_n.push(item);
			Stack_o.pop();
			break;
		}

	case 'g':
		if (Sin(a) == 0) {
			cerr << "\nInvalid argument for cotangent!\n";
			return false;
		}
		else {
			c = Ctg(a);
			item.type = '0';
			item.value = c;
			Stack_n.push(item);
			Stack_o.pop();
			break;
		}

	case 'e':
		c = exp(a);
		item.type = '0';
		item.value = c;
		Stack_n.push(item);
		Stack_o.pop();
		break;

	default:
		cerr << "\nError!\n";
		return false;
		break;
	}
	return true;
}

int getRang(char Ch) { //Функция возвращает приоритет операции: "1" для сложения и вычитания, "2" для умножения и деления и т.д.
	if (Ch == 's' || Ch == 'c' || Ch == 't' || Ch == 'g' || Ch == 'e')return 4;
	if (Ch == '^')return 3;
	if (Ch == '+' || Ch == '-')return 1;
	if (Ch == '*' || Ch == '/')return 2;
	else return 0;
}

void calculator_start()
{
	while (true)
	{
		printf("\n");
		cout << "To use Pi, type 'p'; to use E, type 'exp(1)'\n";
		Sleep(170);
		cout << "Enter expression: ";
		Sleep(170);
		std::string str;
		getline(cin, str);
		stringstream sstr{ str };

		char Ch; //Переменная, в которую будет записываться текущий обрабатываемый символ
		double value;
		bool flag = true; //Нужен для того, чтобы программа смогла отличить унарный минус (-5) от вычитания (2-5)
		stack<Leksema> Stack_n; //Стек с числами
		stack<Leksema> Stack_o; //Стек с операциями
		Leksema item; //Объект типа Leksema
		while (true) {
			Ch = sstr.peek(); //Смотрим на первый символ
			if (Ch == '\377')break; //Если достигнут конец строки, выходим из цикла
			if (Ch == ' ') { //Игнорирование пробелов
				sstr.ignore();
				continue;
			}
			if (Ch == 's' || Ch == 'c' || Ch == 't' || Ch == 'e') { //Если прочитана функция
				char foo[3]; //массив на 3 символа для определения типа прочитанной функции
				for (int i = 0; i < 3; i++) {
					Ch = sstr.peek();
					foo[i] = Ch;
					sstr.ignore();
				}
				if (foo[0] == 's' && foo[1] == 'i' && foo[2] == 'n') { //Если прочитанная функция - синус
					item.type = 's';
					item.value = 0;
					Stack_o.push(item); //Операция кладется в стек с операциями
					continue;
				}
				if (foo[0] == 'c' && foo[1] == 'o' && foo[2] == 's') { //Если прочитанная функция - косинус
					item.type = 'c';
					item.value = 0;
					Stack_o.push(item); //Операция кладется в стек с операциями
					continue;
				}
				if (foo[0] == 't' && foo[1] == 'a' && foo[2] == 'n') { //Если прочитанная функция - тангенс
					item.type = 't';
					item.value = 0;
					Stack_o.push(item); //Операция кладется в стек с операциями
					continue;
				}
				if (foo[0] == 'c' && foo[1] == 't' && foo[2] == 'g') { //Если прочитанная функция - котангенс
					item.type = 'g';
					item.value = 0;
					Stack_o.push(item); //Операция кладется в стек с операциями
					continue;
				}
				if (foo[0] == 'e' && foo[1] == 'x' && foo[2] == 'p') { //Если прочитанная функция - экспонента
					item.type = 'e';
					item.value = 0;
					Stack_o.push(item); //Операция кладется в стек с операциями
					continue;
				}
			}
			if (Ch == 'p') { //Если прочитано число Пи
				item.type = '0';
				item.value = Pi;
				Stack_n.push(item); //Число кладется в стек с числами
				flag = 0;
				sstr.ignore();
				continue;
			}
			if (Ch >= '0' && Ch <= '9' || Ch == '-' && flag == 1) { //Если прочитано число
				sstr >> value;
				item.type = '0';
				item.value = value;
				Stack_n.push(item); //Число кладется в стек с числами
				flag = 0;
				continue;
			}
			if (Ch == '+' || Ch == '-' && flag == 0 || Ch == '*' || Ch == '/' || Ch == '^') { //Если прочитана операция
				if (Stack_o.size() == 0) { //Если стек с операциями пуст
					item.type = Ch;
					item.value = 0;
					Stack_o.push(item); //Операция кладется в стек с операциями
					sstr.ignore();
					continue;
				}
				if (Stack_o.size() != 0 && getRang(Ch) >
					getRang(Stack_o.top().type)) { //Если стек с операциями НЕ пуст, но приоритет текущей операции выше верхней в стеке с операциями
					item.type = Ch;
					item.value = 0;
					Stack_o.push(item); //Операция кладется в стек с операциями
					sstr.ignore();
					continue;
				}
				if (Stack_o.size() != 0 && getRang(Ch) <=
					getRang(Stack_o.top().type)) {//Если стек с операциями НЕ пуст, но приоритет текущей операции ниже либо равен верхней в стеке с операциями
					if (Maths(Stack_n, Stack_o, item) == false) { //Если функция вернет "false", то прекращаем работу
					}
					continue;
				}
			}
			if (Ch == '(') { //Если прочитана открывающаяся скобка
				item.type = Ch;
				item.value = 0;
				Stack_o.push(item); //Операция кладется в стек с операциями
				sstr.ignore();
				continue;
			}
			if (Ch == ')') { //Если прочитана закрывающаяся скобка
				while (Stack_o.top().type != '(') {
					if (Maths(Stack_n, Stack_o, item) == false) { //Если функция вернет "false", то прекращаем работу
					}
					else continue; //Если все хорошо
				}
				Stack_o.pop();
				sstr.ignore();
				continue;
			}
			else { //Если прочитан какой-то странный символ
				cout << "\nInvalid expression entered!\n";
				getch();
				check_start_start(); // (+)

			}
		}
		while (Stack_o.size() !=
			0) { //Вызываем матем. функцию до тех пор, пока в стеке с операциями не будет 0 элементов
			if (Maths(Stack_n, Stack_o, item) == false) { //Если функция вернет "false", то прекращаем работу
			}
			else continue; //Если все хорошо
		}
		cout << "\033[0;31m" << "  !" << "\033[0;37m" << "Answer: " << Stack_n.top().value << endl; //Выводим ответ
		getch();
		check_start_start(); // (+)
	}
}