using namespace std;
#include<iostream>
#include"Testowanie.h"
#include"MenuInt.h"

void Testowanie :: testowanie()
{

	MenuInt int_;
	double czas_int=0;
	int wielkosc_tablicy = 50000;
	cout << "INT: " <<endl ;
	
	cout << "KOPCOWANIE: " << endl;
	for (int k = 0; k < 7; k++) {
		czas_int = 0;

		wielkosc_tablicy = 50000 + k * 150000;
		for (int i = 0; i < 100; i++)
		{

			int_.generacja(wielkosc_tablicy);
			czas_int = czas_int + int_.sort_kopcowanie_wywolanie();
			int_.usuwanie_wywolanie();

		}
		cout << wielkosc_tablicy << " elementow: " << czas_int / 100 << " milisekund" << endl;
	}
	cout << "SHELL: " << endl;
	for (int k = 0; k < 7; k++) {
		czas_int = 0;

		wielkosc_tablicy = 50000 + k * 150000;
		for (int i = 0; i < 100; i++)
		{

			int_.generacja(wielkosc_tablicy);
			czas_int = czas_int + int_.shell_v1_wywolanie();
			int_.usuwanie_wywolanie();

		}
		cout << wielkosc_tablicy << " elementow: " << czas_int / 100 << " milisekund" << endl;
	}
	for (int k = 0; k < 7; k++) {
		czas_int = 0;

		wielkosc_tablicy = 50000 + k * 150000;
		for (int i = 0; i < 100; i++)
		{

			int_.generacja(wielkosc_tablicy);
			czas_int = czas_int + int_.shell_v2_wywolanie();
			int_.usuwanie_wywolanie();

		}
		cout << wielkosc_tablicy << " elementow: " << czas_int / 100 << " milisekund" << endl;
	}
	cout << "QUICK SORT: " << endl;
	for (int k = 0; k < 7; k++) {
		czas_int = 0;

		wielkosc_tablicy = 50000 + k * 150000;
		for (int i = 0; i < 100; i++)
		{

			int_.generacja(wielkosc_tablicy);
			czas_int = czas_int + int_.quick_sort_wywolanie_Lp();
			int_.usuwanie_wywolanie();

		}
		cout << wielkosc_tablicy << " elementow: " << czas_int / 100 << " milisekund" << endl;
	}
	for (int k = 0; k < 7; k++) {
		czas_int = 0;

		wielkosc_tablicy = 50000 + k * 150000;
		for (int i = 0; i < 100; i++)
		{

			int_.generacja(wielkosc_tablicy);
			czas_int = czas_int + int_.quick_sort_wywolanie_Sp();
			int_.usuwanie_wywolanie();

		}
		cout << wielkosc_tablicy << " elementow: " << czas_int / 100 << " milisekund" << endl;
	}
	for (int k = 0; k < 7; k++) {
		czas_int = 0;

		wielkosc_tablicy = 50000 + k * 150000;
		for (int i = 0; i < 100; i++)
		{

			int_.generacja(wielkosc_tablicy);
			czas_int = czas_int + int_.quick_sort_wywolanie_Pp();
			int_.usuwanie_wywolanie();

		}
		cout << wielkosc_tablicy << " elementow: " << czas_int / 100 << " milisekund" << endl;
	}

	for (int k = 0; k < 7; k++) {
		czas_int = 0;

		wielkosc_tablicy = 50000 + k * 150000;
		for (int i = 0; i < 100; i++)
		{

			int_.generacja(wielkosc_tablicy);
			czas_int = czas_int + int_.quick_sort_wywolanie_Rp();
			int_.usuwanie_wywolanie();

		}
		cout << wielkosc_tablicy << " elementow: " << czas_int / 100 << " milisekund" << endl;
	}
	cout << "WSTAWIANIE: " << endl;
	for (int k = 0; k < 7; k++) {
		czas_int = 0;

		wielkosc_tablicy = 50000 + k * 150000;
		for (int i = 0; i < 100; i++)
		{

			int_.generacja(wielkosc_tablicy);
			czas_int = czas_int + int_.sort_wstawianie_wywolanie();
			int_.usuwanie_wywolanie();

		}
		cout << wielkosc_tablicy << " elementow: " << czas_int / 100 << " milisekund" << endl;
	}
}