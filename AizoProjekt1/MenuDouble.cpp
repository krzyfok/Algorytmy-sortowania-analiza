#include <iostream>
#include<random>
#include "MenuDouble.h"
#include"MenuAbstr.h"
#include"LicznikCzasu.h"

using namespace std;
double* MenuDouble::wsk = nullptr; //wskaznik na dynamiczn� tablice
double* MenuDouble::wsk_kopia = nullptr;


void MenuDouble::generacja(int liczba)
{
	const double dolna_granica = 0;//deklaracja stałej dolnej granicy
	const double gorna_granica = 1000;//deklaracja stałej górnej granicy
	uniform_real_distribution<double>unif(dolna_granica, gorna_granica);// Inicjalizacja obiektu uniform_real_distribution zdefiniowanego dla przedziału [0, 1000], zapewnia on równomierne rozłożenie liczb z przedziału
	random_device ran;// Inicjalizacja obiektu random_device do generowania ziarna losowości
	mt19937 rand_engine(ran());// Inicjalizacja generatora liczb losowych mt19937 z ziarnem uzyskanym z random_device

	liczba_elementow = liczba;
	wsk = new double[liczba_elementow];
	wsk_kopia = new double[liczba_elementow];
	for (int i = 0; i < liczba_elementow; i++)//generacja losowych wartosci
	{
		wsk[i] = unif(rand_engine);// Generowanie losowej liczby zmiennoprzecinkowej z przedziału [0, 1000]
		wsk_kopia[i] = wsk[i];
	}
}
void MenuDouble::generacja_rosnaco(int liczba)
{
	liczba_elementow = liczba;
	wsk = new double[liczba_elementow];
	wsk_kopia = new double[liczba_elementow];
	for (int i = 0; i < liczba_elementow; i++)
	{
		wsk[i] = double(i);
		wsk_kopia[i] = double(i);
	}
}
void MenuDouble::generacja_malejaco(int liczba)
{
	liczba_elementow = liczba;
	wsk = new double[liczba_elementow];
	wsk_kopia = new double[liczba_elementow];
	int k = liczba_elementow;
	for (int i = 0; i < liczba_elementow; i++)
	{
		wsk[i] = double(k);
		wsk_kopia[i] = double(k);
		k--;
	}
}

void MenuDouble::generacja_33(int liczba)
{
	liczba_elementow = liczba;
	const double dolna_granica = 0;
	const double gorna_granica = 1000;
	uniform_real_distribution<double>unif(dolna_granica, gorna_granica);
	random_device ran;
	mt19937 rand_engine(ran());
	wsk = new double[liczba_elementow];
	wsk_kopia = new double[liczba_elementow];
	int podzial = (liczba_elementow * 33) / 100;

	for (int i = 0; i < podzial; i++)
	{
		wsk[i] = double(i);
		wsk_kopia[i] = double(i);
	}
	for (int i = podzial; i < liczba_elementow; i++)
	{
		wsk[i] = unif(rand_engine)+double(podzial);
		wsk_kopia[i] = wsk[i];
	}
}

void MenuDouble::generacja_66(int liczba)
{
	liczba_elementow = liczba;
	const double dolna_granica = 0;
	const double gorna_granica = 1000;
	uniform_real_distribution<double>unif(dolna_granica, gorna_granica);
	random_device ran;
	mt19937 rand_engine(ran());
	wsk = new double[liczba_elementow];
	wsk_kopia = new double[liczba_elementow];
	int podzial = (liczba_elementow * 66) / 100;

	for (int i = 0; i < podzial; i++)
	{
		wsk[i] = double(i);
		wsk_kopia[i] = double(i);
	}
	for (int i = podzial; i < liczba_elementow; i++)
	{
		wsk[i] = unif(rand_engine)+double(podzial);
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
				liczba_elementow = stoi(wiersz);//zamiana pierwszego wiersza na int i utworzenie tabeli
				wsk = new double[liczba_elementow];
				wsk_kopia = new double[liczba_elementow];

			}
			else
			{
				wsk[i - 1] = stod(wiersz);//zamian wiersza na double i wstawienie do tabeli
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


double MenuDouble::sort_wstawianie_wywolanie()
{
	licznik.start();
	sort_wstawianie(wsk_kopia, liczba_elementow);

	return licznik.stop();


}
double MenuDouble::sort_kopcowanie_wywolanie() {

	licznik.start();
	sort_kopcowanie(wsk_kopia, liczba_elementow);
	return licznik.stop();

}
//PIVOT LEWO

double MenuDouble::quick_sort_wywolanie_Lp()
{
	licznik.start();
	quick_sort_Lp(wsk_kopia, 0, liczba_elementow - 1);
	return licznik.stop();
}



//PIVOT SRODEK
double MenuDouble::quick_sort_wywolanie_Sp()
{
	licznik.start();
	quick_sort_Sp(wsk_kopia, 0, liczba_elementow - 1);
	return licznik.stop();
}


//PIVOT PRAWO

double MenuDouble::quick_sort_wywolanie_Pp()
{
	licznik.start();
	quick_sort_Pp(wsk_kopia, 0, liczba_elementow - 1);
	return licznik.stop();
}


//PIVOT RANDOM

double MenuDouble::quick_sort_wywolanie_Rp()
{
	licznik.start();
	quick_sort_Rp(wsk_kopia, 0, liczba_elementow - 1);
	return licznik.stop();
}



double MenuDouble::shell_v1_wywolanie()
{
	licznik.start();
	shell_v1(wsk_kopia, liczba_elementow);
	return licznik.stop();
}
double MenuDouble::shell_v2_wywolanie()
{
	licznik.start();
	shell_v2(wsk_kopia, liczba_elementow);
	return licznik.stop();
}