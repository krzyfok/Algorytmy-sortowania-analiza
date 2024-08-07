﻿#include <iostream>
#include"LicznikCzasu.h"
#include "MenuInt.h"
#include"MenuAbstr.h"

using namespace std;

int* MenuInt::wsk = nullptr; //wskaznik na dynamiczn� tablice
int* MenuInt::wsk_kopia = nullptr;


void MenuInt:: generacja(int liczba)
{liczba_elementow = liczba;
	liczba_elementow = liczba;
	wsk = new int[liczba_elementow];//utworzenie dynamicznej tablicy
	wsk_kopia = new int[liczba_elementow];//tablica do przeprowadzania sortowania
	for (int i = 0; i < liczba_elementow; i++)//generacja losowych wartosci
	{
		wsk[i] = rand();//generacja losowej liczby int
		wsk_kopia[i] = wsk[i];//skopiowanie wartosci do drugiej tablicy	
	}
}
void MenuInt::generacja_rosnaco(int liczba)
{
	liczba_elementow = liczba;
	wsk = new int[liczba_elementow];
	wsk_kopia = new int[liczba_elementow];
	for (int i = 0; i < liczba_elementow; i++)
	{
		wsk[i] = i;
		wsk_kopia[i] = i;
		
	}
}
void MenuInt::generacja_malejaco(int liczba)
{
	liczba_elementow = liczba;
	wsk = new int[liczba_elementow];
	wsk_kopia = new int[liczba_elementow];
	int k = liczba_elementow;
	for (int i = 0; i < liczba_elementow; i++)
	{
		wsk[i] = k;
		wsk_kopia[i] = k;
		k--;
	}
}

void MenuInt::generacja_33(int liczba)
{
	liczba_elementow = liczba;
	wsk = new int[liczba_elementow];
	wsk_kopia = new int[liczba_elementow];
	int podzial = (liczba_elementow*33)/100;

	for (int i = 0; i < podzial; i++)
	{
		wsk[i] = i;
		wsk_kopia[i] = i;
	}
	for (int i = podzial; i < liczba_elementow; i++)
	{
		wsk[i] = rand()+podzial;
		wsk_kopia[i] = wsk[i];
	}
}

void MenuInt::generacja_66(int liczba)
{
	liczba_elementow = liczba;
	wsk = new int[liczba_elementow];
	wsk_kopia = new int[liczba_elementow];
	int podzial = (liczba_elementow * 66) / 100;

	for (int i = 0; i < podzial; i++)
	{
		wsk[i] = i;
		wsk_kopia[i] = i;
	}
	for (int i = podzial; i < liczba_elementow; i++)
	{
		wsk[i] = rand()+podzial;
		wsk_kopia[i] = wsk[i];
	}
}

void MenuInt::wczytwanie_tablicy_z_pliku()
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
				liczba_elementow = stoi(wiersz);//zamiana na int i załadowanie wielkosci tabeli
				wsk = new int[liczba_elementow];
				wsk_kopia = new int[liczba_elementow];

			}
			else
			{
				wsk[i - 1] = stoi(wiersz);//zamiana na int i wczytanie do tabeli
				wsk_kopia[i - 1] = wsk[i - 1];

			}
			i++;

		}

	}
	else(cout << "BRAK PLIKU\n");
	plik.close();

}

void MenuInt::usuwanie_wywolanie()
{
	usuwanie(wsk, wsk_kopia, liczba_elementow);
}

void MenuInt::sprawdzenie_poprawnosci_sortowania_wywolanie()
{
	sprawdzanie_poprawnosci_sortowania(wsk_kopia, liczba_elementow);
}

void MenuInt::wyswietlanie_przed_sortowaniem_wywolanie()
{

	wyswietlanie(wsk, liczba_elementow);
}

void MenuInt::wyswietlanie_po_sortowaniu_wywolanie()
{
	wyswietlanie(wsk_kopia, liczba_elementow);
}


void MenuInt::kopiowanie_tablicy_wywolanie()
{
	kopiowanie_tablicy(wsk, wsk_kopia,liczba_elementow);
}


double MenuInt::sort_wstawianie_wywolanie()
{
	licznik.start();
	sort_wstawianie(wsk_kopia, liczba_elementow);
	return licznik.stop();
	


}
double	 MenuInt::sort_kopcowanie_wywolanie() {
	
	licznik.start();
	sort_kopcowanie(wsk_kopia, liczba_elementow);
	return licznik.stop();
	

}
//PIVOT LEWO

double MenuInt::quick_sort_wywolanie_Lp()
{
	licznik.start();
	quick_sort_Lp(wsk_kopia, 0, liczba_elementow-1);
	return licznik.stop();
}



//PIVOT SRODEK
double MenuInt::quick_sort_wywolanie_Sp()
{
	licznik.start();
	quick_sort_Sp(wsk_kopia, 0, liczba_elementow - 1);
	return licznik.stop();
}


//PIVOT PRAWO

double MenuInt::quick_sort_wywolanie_Pp()
{
	licznik.start();
	quick_sort_Pp(wsk_kopia, 0, liczba_elementow - 1);
	return licznik.stop();
}


//PIVOT RANDOM

double MenuInt::quick_sort_wywolanie_Rp()
{
	licznik.start();
	quick_sort_Rp(wsk_kopia, 0, liczba_elementow - 1);
	return licznik.stop();
}



double MenuInt::shell_v1_wywolanie()
{
	licznik.start();
	shell_v1(wsk_kopia, liczba_elementow);
	return licznik.stop();
}
double MenuInt::shell_v2_wywolanie()
{
	licznik.start();
	shell_v2(wsk_kopia, liczba_elementow);
	return licznik.stop();
}