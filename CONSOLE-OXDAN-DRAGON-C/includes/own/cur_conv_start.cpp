#include <windows.h>
#include <iostream>
#include "all_diclarations.h"

using namespace std;

void cur_conv_start()
{
	const double YEN_PER_DOLLAR = 131.18; //
	const double EUROS_PER_DOLLAR = 0.926; //
	const double peso_per = 18.96; //
	const double rub_per = 70.6; //
	const double funt_per = 0.83; //
	const double canada_per = 1.34; //
	const double hryvna_per = 36.8; //
	const double uane_per = 6.77; //

	double usd;

	cout << endl;
	cout << "Enter U.S. dollar amount: ";
	cin >> usd;

	cout << endl << "(" << "\033[0;31m" << "2023" << "\033[0;37m" << ")" << ":" << "\n";
	cout << endl << " " << "\033[0; 33m" << usd << "\033[0;32m" << "$ " << "\033[0;37m" << "is: " << endl;
	cout << "                             " << endl;
	cout << "  " << " \033[0;33m" << (usd * YEN_PER_DOLLAR) << "\033[0;37m" << "     Yen (Japan) (JPY)" << endl;
	cout << "                                                            " << endl;
	cout << "  " << " \033[0;33m" << (usd * EUROS_PER_DOLLAR) << "\033[0;37m" << "       Euro (Europe) (EUR)" << endl;
	cout << "                                                            " << endl;
	cout << "  " << " \033[0;33m" << (usd * peso_per) << "\033[0;37m" << "           Pesos (Mexico) (MXN)" << endl;
	cout << "                                                            " << endl;
	cout << "  " << " \033[0;33m" << (usd * rub_per) << "\033[0;37m" << "            Ruble (Russia) (RUB)" << endl;
	cout << "                                                            " << endl;
	cout << "  " << " \033[0;33m" << (usd * funt_per) << "\033[0;37m" << "           lb. (England) (GBP)" << endl;
	cout << "                                                            " << endl;
	cout << "  " << " \033[0;33m" << (usd * canada_per) << "\033[0;37m" << "           $Dollars$ (Canada) (CAD)" << endl;
	cout << "                                                            " << endl;
	cout << "  " << " \033[0;33m" << (usd * hryvna_per) << "\033[0;37m" << "           Hryvnia (Ukraine) (UAH)" << endl;
	cout << "                                                            " << endl;
	cout << "  " << " \033[0;33m" << (usd * uane_per) << "\033[0;37m" << "           Yuan (Chaina) (CNY)" << endl;
	cout << "\033[0;37m";

	//cout << endl;

	check_start_start();
}