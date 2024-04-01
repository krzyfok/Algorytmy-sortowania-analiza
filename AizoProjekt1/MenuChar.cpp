#include <iostream>
#include<random>
#include "MenuChar.h"
#include"MenuAbstr.h"
#include"LicznikCzasu.h"

using namespace std;
char* MenuChar::wsk = nullptr; //wskaznik na dynamiczn� tablice
char* MenuChar::wsk_kopia = nullptr;



void MenuChar::generacja()
{
	

	cout << "Podaj liczbe elemntow: ";
	cin >> liczba_elementow;
	wsk = new char[liczba_elementow];
	wsk_kopia = new char[liczba_elementow];
	for (int i = 0; i < liczba_elementow; i++)//generacja losowych wartosci
	{
		wsk[i] = '!'+rand()%222;
		wsk_kopia[i] = wsk[i];

	}

}
void MenuChar::wczytwanie_tablicy_z_pliku()
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
				wsk = new char[liczba_elementow];
				wsk_kopia = new char[liczba_elementow];

			}
			else
			{
				wsk[i - 1] = wiersz[0];
				wsk_kopia[i - 1] = wsk[i - 1];

			}
			i++;

		}

	}
	else(cout << "BRAK PLIKU\n");
	plik.close();



}

void MenuChar::usuwanie_wywolanie()
{
	usuwanie(wsk, wsk_kopia, liczba_elementow);
}

void MenuChar::sprawdzenie_poprawnosci_sortowania_wywolanie()
{
	sprawdzanie_poprawnosci_sortowania(wsk_kopia, liczba_elementow);
}

void MenuChar::wyswietlanie_przed_sortowaniem_wywolanie()
{

	wyswietlanie(wsk, liczba_elementow);
}

void MenuChar::wyswietlanie_po_sortowaniu_wywolanie()
{
	wyswietlanie(wsk_kopia, liczba_elementow);
}


void MenuChar::kopiowanie_tablicy_wywolanie()
{
	kopiowanie_tablicy(wsk, wsk_kopia, liczba_elementow);
}


double MenuChar::sort_wstawianie_wywolanie()
{
	licznik.start();
	sort_wstawianie(wsk_kopia, liczba_elementow);
	return licznik.stop();



}
double MenuChar::sort_kopcowanie_wywolanie() {

	licznik.start();
	sort_kopcowanie(wsk_kopia, liczba_elementow);
	return licznik.stop();

}
//PIVOT LEWO

double MenuChar::quick_sort_wywolanie_Lp()
{
	licznik.start();
	quick_sort_Lp(wsk_kopia, 0, liczba_elementow - 1);
	return licznik.stop();
}



//PIVOT SRODEK
double MenuChar::quick_sort_wywolanie_Sp()
{
	licznik.start();
	quick_sort_Sp(wsk_kopia, 0, liczba_elementow - 1);
	return licznik.stop();
}


//PIVOT PRAWO

double MenuChar::quick_sort_wywolanie_Pp()
{
	licznik.start();
	quick_sort_Pp(wsk_kopia, 0, liczba_elementow - 1);
	return licznik.stop();
}


//PIVOT RANDOM

double MenuChar::quick_sort_wywolanie_Rp()
{
	licznik.start();
	quick_sort_Rp(wsk_kopia, 0, liczba_elementow - 1);
	return licznik.stop();
}



double MenuChar::shell_v1_wywolanie()
{
	licznik.start();
	shell_v1(wsk_kopia, liczba_elementow);
	return licznik.stop();
}
double MenuChar::shell_v2_wywolanie()
{
	licznik.start();
	shell_v2(wsk_kopia, liczba_elementow);
	return licznik.stop();
}