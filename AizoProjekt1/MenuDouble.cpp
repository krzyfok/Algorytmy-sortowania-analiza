#include <iostream>
#include<random>
#include "MenuDouble.h"
#include"MenuAbstr.h"

using namespace std;
int MenuDouble::liczba_elementow = 0;
double* MenuDouble::wsk = nullptr; //wskaznik na dynamiczn� tablice
double* MenuDouble::wsk_kopia = nullptr;


void MenuDouble::generacja()
{
	const double dolna_granica = 0;
	const double gorna_granica = 1000;
	uniform_real_distribution<double>unif(dolna_granica, gorna_granica);
	random_device ran;
	mt19937 rand_engine(ran());

	cout << "Podaj liczbe elemntow: ";
	cin >> liczba_elementow;
	wsk = new double[liczba_elementow];
	wsk_kopia = new double[liczba_elementow];
	for (int i = 0; i < liczba_elementow; i++)//generacja losowych wartosci
	{
		wsk[i] = unif(rand_engine);
		wsk_kopia[i] = wsk[i];
		
	}

}
void MenuDouble::wczytwanie_tablicy_z_pliku()
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
				wsk = new double[liczba_elementow];
				wsk_kopia = new double[liczba_elementow];

			}
			else
			{
				wsk[i - 1] = stod(wiersz);
				wsk_kopia[i - 1] = wsk[i - 1];

			}
			i++;

		}

	}
	else(cout << "BRAK PLIKU\n");
	plik.close();



}

void MenuDouble::usuwanie_wywolanie()
{
	usuwanie(wsk, wsk_kopia, liczba_elementow);
}

void MenuDouble::sprawdzenie_poprawnosci_sortowania_wywolanie()
{
	sprawdzanie_poprawnosci_sortowania(wsk_kopia, liczba_elementow);
}

void MenuDouble::wyswietlanie_przed_sortowaniem_wywolanie()
{

	wyswietlanie(wsk, liczba_elementow);
}

void MenuDouble::wyswietlanie_po_sortowaniu_wywolanie()
{
	wyswietlanie(wsk_kopia, liczba_elementow);
}


void MenuDouble::kopiowanie_tablicy_wywolanie()
{
	kopiowanie_tablicy(wsk, wsk_kopia, liczba_elementow);
}


void MenuDouble::sort_wstawianie_wywolanie()
{

	sort_wstawianie(wsk_kopia, liczba_elementow);




}
void MenuDouble::sort_kopcowanie_wywolanie() {


	sort_kopcowanie(wsk_kopia, liczba_elementow);


}
//PIVOT LEWO

void MenuDouble::quick_sort_wywolanie_Lp()
{

	quick_sort_Lp(wsk_kopia, 0, liczba_elementow - 1);
}



//PIVOT SRODEK
void MenuDouble::quick_sort_wywolanie_Sp()
{

	quick_sort_Sp(wsk_kopia, 0, liczba_elementow - 1);
}


//PIVOT PRAWO

void MenuDouble::quick_sort_wywolanie_Pp()
{

	quick_sort_Pp(wsk_kopia, 0, liczba_elementow - 1);
}


//PIVOT RANDOM

void MenuDouble::quick_sort_wywolanie_Rp()
{

	quick_sort_Rp(wsk_kopia, 0, liczba_elementow - 1);
}



void MenuDouble::shell_v1_wywolanie()
{
	shell_v1(wsk_kopia, liczba_elementow);
}
void MenuDouble::shell_v2_wywolanie()
{
	shell_v2(wsk_kopia, liczba_elementow);
}