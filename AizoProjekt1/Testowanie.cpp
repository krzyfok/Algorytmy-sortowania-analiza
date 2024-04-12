using namespace std;
#include<iostream>
#include"Testowanie.h"
#include"MenuInt.h"
#include"MenuChar.h"
#include"MenuFloat.h"
#include"MenuDouble.h"
void Testowanie :: testowanie()
{
	MenuChar c_;
	MenuInt i_;
	MenuFloat f_;
	MenuDouble d_;
	cout << "PRZYPADKI SKRAJNE:" << endl;

	cout << "CHAR: " << endl;
	szczegolne(c_);
	cout << "INT: " << endl;
	szczegolne(i_);
	cout << "float: " << endl;
	szczegolne(f_);
	cout << "DOUBLE: " << endl;
	szczegolne(d_);



	cout << "CHAR: " << endl;
	test_szablon(c_);
	cout << "INT: " << endl;
	test_szablon(i_);
	cout << "float: " << endl;
	test_szablon(f_);
	cout << "DOUBLE: " << endl;
	test_szablon(d_);
}


void Testowanie::szczegolne(MenuAbstr& obj)
{
	int wielkosc_start = 10000;
	double czas_int = 0;
	int wielkosc_tablicy = 0;
	
	cout << "tablica posortowana rosnco:" << endl;
	cout << "KOPCOWANIE:" << endl;
	for (int k = 0; k < 7; k++) {
		czas_int = 0;
	  wielkosc_tablicy = wielkosc_start * pow(2, k);


		obj.generacja_rosnaco(wielkosc_tablicy);
		czas_int =obj.sort_kopcowanie_wywolanie();
		obj.usuwanie_wywolanie();
		cout << wielkosc_tablicy << " elementow: " << czas_int << " milisekund" << endl;
	}
	cout << "SHELL:" << endl;
	for (int k = 0; k < 7; k++) {
		czas_int = 0;
		wielkosc_tablicy = wielkosc_start * pow(2, k);


		obj.generacja_rosnaco(wielkosc_tablicy);
		czas_int = obj.shell_v1_wywolanie();
		obj.usuwanie_wywolanie();
		cout << wielkosc_tablicy << " elementow: " << czas_int << " milisekund" << endl;
	}
	cout << "SHELLv2:" << endl;
	for (int k = 0; k < 7; k++) {
		czas_int = 0;
		wielkosc_tablicy = wielkosc_start * pow(2, k);


		obj.generacja_rosnaco(wielkosc_tablicy);
		czas_int = obj.shell_v2_wywolanie();
		obj.usuwanie_wywolanie();
		cout << wielkosc_tablicy << " elementow: " << czas_int << " milisekund" << endl;
	}
	cout << "QUICK:" << endl;
	for (int k = 0; k < 7; k++) {
		czas_int = 0;
		wielkosc_tablicy = wielkosc_start * pow(2, k);


		obj.generacja_rosnaco(wielkosc_tablicy);
		czas_int = obj.quick_sort_wywolanie_Sp();
		obj.usuwanie_wywolanie();
		cout << wielkosc_tablicy << " elementow: " << czas_int << " milisekund" << endl;
	}
	cout << "WSTAWIANIE:" << endl;
	for (int k = 0; k < 7; k++) {
		czas_int = 0;
		wielkosc_tablicy = wielkosc_start * pow(2, k);


		obj.generacja_rosnaco(wielkosc_tablicy);
		czas_int = obj.sort_wstawianie_wywolanie();
		obj.usuwanie_wywolanie();
		cout << wielkosc_tablicy << " elementow: " << czas_int << " milisekund" << endl;
	}
	cout << "tablica posortwana malejaco: " << endl;
	cout << "KOPCOWANIE:" << endl;
	for (int k = 0; k < 7; k++) {
		czas_int = 0;
		wielkosc_tablicy = wielkosc_start * pow(2, k);


		obj.generacja_malejaco(wielkosc_tablicy);
		czas_int = obj.sort_kopcowanie_wywolanie();
		obj.usuwanie_wywolanie();
		cout << wielkosc_tablicy << " elementow: " << czas_int << " milisekund" << endl;
	}
	cout << "SHELL:" << endl;
	for (int k = 0; k < 7; k++) {
		czas_int = 0;
		wielkosc_tablicy = wielkosc_start * pow(2, k);


		obj.generacja_malejaco(wielkosc_tablicy);
		czas_int = obj.shell_v1_wywolanie();
		obj.usuwanie_wywolanie();
		cout << wielkosc_tablicy << " elementow: " << czas_int << " milisekund" << endl;
	}
	cout << "SHELLv2:" << endl;
	for (int k = 0; k < 7; k++) {
		czas_int = 0;
		wielkosc_tablicy = wielkosc_start * pow(2, k);


		obj.generacja_malejaco(wielkosc_tablicy);
		czas_int = obj.shell_v2_wywolanie();
		obj.usuwanie_wywolanie();
		cout << wielkosc_tablicy << " elementow: " << czas_int << " milisekund" << endl;
	}

	cout << "QUICK:" << endl;
	for (int k = 0; k < 7; k++) {
		czas_int = 0;
		wielkosc_tablicy = wielkosc_start * pow(2, k);


		obj.generacja_malejaco(wielkosc_tablicy);
		czas_int = obj.quick_sort_wywolanie_Sp();
		obj.usuwanie_wywolanie();
		cout << wielkosc_tablicy << " elementow: " << czas_int << " milisekund" << endl;
	}
	cout << "WSTAWIANIE:" << endl;
	for (int k = 0; k < 7; k++) {
		czas_int = 0;
		wielkosc_tablicy = wielkosc_start * pow(2, k);


		obj.generacja_malejaco(wielkosc_tablicy);
		czas_int = obj.sort_wstawianie_wywolanie();
		obj.usuwanie_wywolanie();
		cout << wielkosc_tablicy << " elementow: " << czas_int << " milisekund" << endl;
	}
	cout << "tablica posortowana w 33%" << endl;
	cout << "KOPCOWANIE:" << endl;
	for (int k = 0; k < 7; k++) {
		czas_int = 0;
		wielkosc_tablicy = wielkosc_start * pow(2, k);


		obj.generacja_33(wielkosc_tablicy);
		czas_int = obj.sort_kopcowanie_wywolanie();
		obj.usuwanie_wywolanie();
		cout << wielkosc_tablicy << " elementow: " << czas_int << " milisekund" << endl;
	}
	cout << "SHELL:" << endl;
	for (int k = 0; k < 7; k++) {
		czas_int = 0;
		wielkosc_tablicy = wielkosc_start * pow(2, k);


		obj.generacja_33(wielkosc_tablicy);
		czas_int = obj.shell_v1_wywolanie();
		obj.usuwanie_wywolanie();
		cout << wielkosc_tablicy << " elementow: " << czas_int << " milisekund" << endl;
	}
	cout << "SHELLv2:" << endl;
	for (int k = 0; k < 7; k++) {
		czas_int = 0;
		wielkosc_tablicy = wielkosc_start * pow(2, k);


		obj.generacja_33(wielkosc_tablicy);
		czas_int = obj.shell_v2_wywolanie();
		obj.usuwanie_wywolanie();
		cout << wielkosc_tablicy << " elementow: " << czas_int << " milisekund" << endl;
	}
	cout << "QUICK:" << endl;
	for (int k = 0; k < 7; k++) {
		czas_int = 0;
		wielkosc_tablicy = wielkosc_start * pow(2, k);


		obj.generacja_33(wielkosc_tablicy);
		czas_int = obj.quick_sort_wywolanie_Sp();
		obj.usuwanie_wywolanie();
		cout << wielkosc_tablicy << " elementow: " << czas_int << " milisekund" << endl;
	}
	cout << "WSTAWIANIE:" << endl;
	for (int k = 0; k < 7; k++) {
		czas_int = 0;
		wielkosc_tablicy = wielkosc_start * pow(2, k);


		obj.generacja_33(wielkosc_tablicy);
		czas_int = obj.sort_wstawianie_wywolanie();
		obj.usuwanie_wywolanie();
		cout << wielkosc_tablicy << " elementow: " << czas_int << " milisekund" << endl;
	}
	cout << "tablica posortwana w 66%" << endl;
	
	cout << "KOPCOWANIE:" << endl;
	for (int k = 0; k < 7; k++) {
		czas_int = 0;
		wielkosc_tablicy = wielkosc_start * pow(2, k);


		obj.generacja_66(wielkosc_tablicy);
		czas_int = obj.sort_kopcowanie_wywolanie();
		obj.usuwanie_wywolanie();
		cout << wielkosc_tablicy << " elementow: " << czas_int << " milisekund" << endl;
	}
	cout << "SHELL:" << endl;
	for (int k = 0; k < 7; k++) {
		czas_int = 0;
		wielkosc_tablicy = wielkosc_start * pow(2, k);


		obj.generacja_66(wielkosc_tablicy);
		czas_int = obj.shell_v1_wywolanie();
		obj.usuwanie_wywolanie();
		cout << wielkosc_tablicy << " elementow: " << czas_int << " milisekund" << endl;
	}
	cout << "SHELL2:" << endl;
	for (int k = 0; k < 7; k++) {
		czas_int = 0;
		wielkosc_tablicy = wielkosc_start * pow(2, k);


		obj.generacja_66(wielkosc_tablicy);
		czas_int = obj.shell_v2_wywolanie();
		obj.usuwanie_wywolanie();
		cout << wielkosc_tablicy << " elementow: " << czas_int << " milisekund" << endl;
	}
	cout << "QUICK:" << endl;
	for (int k = 0; k < 7; k++) {
		czas_int = 0;
		wielkosc_tablicy = wielkosc_start * pow(2, k);


		obj.generacja_66(wielkosc_tablicy);
		czas_int = obj.quick_sort_wywolanie_Sp();
		obj.usuwanie_wywolanie();
		cout << wielkosc_tablicy << " elementow: " << czas_int << " milisekund" << endl;
	}
	cout << "WSTAWIANIE:" << endl;
	for (int k = 0; k < 7; k++) {
		czas_int = 0;
		wielkosc_tablicy = wielkosc_start * pow(2, k);


		obj.generacja_66(wielkosc_tablicy);
		czas_int = obj.sort_wstawianie_wywolanie();
		obj.usuwanie_wywolanie();
		cout << wielkosc_tablicy << " elementow: " << czas_int << " milisekund" << endl;
	}




}
void Testowanie::test_szablon(MenuAbstr& obj)
{
	int wielkosc_start = 10000;
	double czas_int = 0;
	int wielkosc_tablicy = 0;

	cout << "KOPCOWANIE: " << endl;
	for (int k = 0; k < 7; k++) {
		czas_int = 0;

	
		wielkosc_tablicy = wielkosc_start * pow(2, k);
		for (int i = 0; i < 100; i++)
		{
			cout << i;
			obj.generacja(wielkosc_tablicy);
			czas_int = czas_int + obj.sort_kopcowanie_wywolanie();
			obj.usuwanie_wywolanie();
			printf("\33[2K\r");
			

		}
		cout << wielkosc_tablicy << " elementow: " << czas_int / 100 << " milisekund" << endl;
	}
	wielkosc_tablicy = 100;
	cout << "SHELL: " << endl;
	for (int k = 0; k < 7; k++) {
		czas_int = 0;

	
		wielkosc_tablicy = wielkosc_start * pow(2, k);
		for (int i = 0; i < 100; i++)
		{
			cout << i;
			obj.generacja(wielkosc_tablicy);
			czas_int = czas_int + obj.shell_v1_wywolanie();
			obj.usuwanie_wywolanie();
			printf("\33[2K\r");
		}
		cout << wielkosc_tablicy << " elementow: " << czas_int / 100 << " milisekund" << endl;
	}
	cout << "shell v2" << endl;
	wielkosc_tablicy = 100;
	for (int k = 0; k < 7; k++) {
		czas_int = 0;
	
		wielkosc_tablicy = wielkosc_start * pow(2, k);
		for (int i = 0; i < 100; i++)
		{
			cout << i;
			obj.generacja(wielkosc_tablicy);
			czas_int = czas_int + obj.shell_v2_wywolanie();
			obj.usuwanie_wywolanie();
			printf("\33[2K\r");
		}
		cout << wielkosc_tablicy << " elementow: " << czas_int / 100 << " milisekund" << endl;
	}wielkosc_tablicy = 100;
	cout << "QUICK SORT: " << endl;
	for (int k = 0; k < 7; k++) {
		czas_int = 0;

		wielkosc_tablicy = wielkosc_start * pow(2, k);
		for (int i = 0; i < 100; i++)
		{
			cout << i;
			obj.generacja(wielkosc_tablicy);
			czas_int = czas_int + obj.quick_sort_wywolanie_Lp();
			obj.usuwanie_wywolanie();
			printf("\33[2K\r");
		}
		cout << wielkosc_tablicy << " elementow: " << czas_int / 100 << " milisekund" << endl;
	}wielkosc_tablicy = 100;
	for (int k = 0; k < 7; k++) {
		czas_int = 0;
		
		wielkosc_tablicy = wielkosc_start * pow(2, k);
		for (int i = 0; i < 100; i++)
		{
			cout << i;
			obj.generacja(wielkosc_tablicy);
			czas_int = czas_int + obj.quick_sort_wywolanie_Sp();
			obj.usuwanie_wywolanie();
			printf("\33[2K\r");
		}
		cout << wielkosc_tablicy << " elementow: " << czas_int / 100 << " milisekund" << endl;
	}wielkosc_tablicy = 100;
	for (int k = 0; k < 7; k++) {
		czas_int = 0;

		
		wielkosc_tablicy = wielkosc_start * pow(2, k);
		for (int i = 0; i < 100; i++)
		{
			cout << i;
			obj.generacja(wielkosc_tablicy);
			czas_int = czas_int + obj.quick_sort_wywolanie_Pp();
			obj.usuwanie_wywolanie();
			printf("\33[2K\r");
		}
		cout << wielkosc_tablicy << " elementow: " << czas_int / 100 << " milisekund" << endl;
	}wielkosc_tablicy = 100;

	for (int k = 0; k < 7; k++) {
		czas_int = 0;

		wielkosc_tablicy = wielkosc_start * pow(2, k);
		for (int i = 0; i < 100; i++)
		{
			cout << i;
			obj.generacja(wielkosc_tablicy);
			czas_int = czas_int + obj.quick_sort_wywolanie_Rp();
			obj.usuwanie_wywolanie();
			printf("\33[2K\r");
		}
		cout << wielkosc_tablicy << " elementow: " << czas_int / 100 << " milisekund" << endl;
	}wielkosc_tablicy = 100;
	cout << "WSTAWIANIE: " << endl;
	for (int k = 0; k < 7; k++) {
		czas_int = 0;


		wielkosc_tablicy = wielkosc_start * pow(2, k);
		for (int i = 0; i < 100; i++)
		{
			cout << i;
			obj.generacja(wielkosc_tablicy);
			czas_int = czas_int + obj.sort_wstawianie_wywolanie();
			obj.usuwanie_wywolanie();
			printf("\33[2K\r");
		}
		cout << wielkosc_tablicy << " elementow: " << czas_int / 100 << " milisekund" << endl;
	}
}