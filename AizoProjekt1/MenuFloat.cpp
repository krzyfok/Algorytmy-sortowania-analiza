﻿#include <iostream>
#include"LicznikCzasu.h"
#include "MenuFloat.h"
#include"MenuAbstr.h"

using namespace std;
float* MenuFloat::wsk = nullptr; //wskaznik na dynamiczn� tablice
float* MenuFloat::wsk_kopia = nullptr;


void MenuFloat::generacja()
{
	cout << "Podaj liczbe elemntow: ";
	cin >> liczba_elementow;
	wsk = new float[liczba_elementow];
	wsk_kopia = new float[liczba_elementow];
	for (int i = 0; i < liczba_elementow; i++)//generacja losowych wartosci
	{
		wsk[i] = (float)(rand()) / (float)(rand());
		wsk_kopia[i] = wsk[i];
		//wsk_kopia[i] = wsk[i]; //sortowanie przeprowadzane na tablicy wsk_kopia
	}

}
void MenuFloat::wczytwanie_tablicy_z_pliku()
{


		string nazwa;

		string wiersz;

		cout << "PODAJ NAZWE PLIKU: ";
		cin >> nazwa;
		ifstream plik(nazwa);
		int i = 0;
		if (plik.is_open())
		{
			while (!plik.eof())
			{
				plik >> wiersz;
				if (i == 0)
				{
					liczba_elementow = stoi(wiersz);
					wsk = new float[liczba_elementow];
					wsk_kopia = new float[liczba_elementow];

				}
				else
				{
					wsk[i - 1] = stof(wiersz);
					wsk_kopia[i - 1] = wsk[i - 1];

				}
				i++;

			}

		}
		else(cout << "BRAK PLIKU\n");
		plik.close();

	

}

void MenuFloat::usuwanie_wywolanie()
{
	usuwanie(wsk, wsk_kopia, liczba_elementow);
}

void MenuFloat::sprawdzenie_poprawnosci_sortowania_wywolanie()
{
	sprawdzanie_poprawnosci_sortowania(wsk_kopia, liczba_elementow);
}

void MenuFloat::wyswietlanie_przed_sortowaniem_wywolanie()
{

	wyswietlanie(wsk, liczba_elementow);
}

void MenuFloat::wyswietlanie_po_sortowaniu_wywolanie()
{
	wyswietlanie(wsk_kopia, liczba_elementow);
}


void MenuFloat::kopiowanie_tablicy_wywolanie()
{
	kopiowanie_tablicy(wsk, wsk_kopia, liczba_elementow);
}


double MenuFloat::sort_wstawianie_wywolanie()
{
	licznik.start();
	sort_wstawianie(wsk_kopia, liczba_elementow);
	return licznik.stop();




}
double MenuFloat::sort_kopcowanie_wywolanie() {

	licznik.start();
	sort_kopcowanie(wsk_kopia, liczba_elementow);
	return licznik.stop();


}
//PIVOT LEWO

double MenuFloat::quick_sort_wywolanie_Lp()
{
	licznik.start();
	quick_sort_Lp(wsk_kopia, 0, liczba_elementow - 1);
	return licznik.stop();
}



//PIVOT SRODEK
double MenuFloat::quick_sort_wywolanie_Sp()
{
	licznik.start();
	quick_sort_Sp(wsk_kopia, 0, liczba_elementow - 1);
	return licznik.stop();
}


//PIVOT PRAWO

double MenuFloat::quick_sort_wywolanie_Pp()
{
	licznik.start();
	quick_sort_Pp(wsk_kopia, 0, liczba_elementow - 1);
	return licznik.stop();
}


//PIVOT RANDOM

double MenuFloat::quick_sort_wywolanie_Rp()
{
	licznik.start();
	quick_sort_Rp(wsk_kopia, 0, liczba_elementow - 1);
	return licznik.stop();
}



double MenuFloat::shell_v1_wywolanie()
{
	licznik.start();
	shell_v1(wsk_kopia, liczba_elementow);
	return licznik.stop();
}
double MenuFloat::shell_v2_wywolanie()
{
	licznik.start();
	shell_v2(wsk_kopia, liczba_elementow);
	return licznik.stop();
}