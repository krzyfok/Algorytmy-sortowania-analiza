#include <iostream>
#include"LicznikCzasu.h"
#include "MenuFloat.h"
#include"MenuAbstr.h"

using namespace std;
float* MenuFloat::wsk = nullptr; //wskaznik na dynamiczn� tablice
float* MenuFloat::wsk_kopia = nullptr;


void MenuFloat::generacja(int liczba)
{
	liczba_elementow = liczba;
	wsk = new float[liczba_elementow];//utworzenie dynamicznej tablicy
	wsk_kopia = new float[liczba_elementow];//tablica do przeprowadzania sortowania
	for (int i = 0; i < liczba_elementow; i++)//generacja losowych wartosci
	{
		wsk[i] = (float)(rand()) / (float)(rand());//podział 2 liczb float przez siebie
		wsk_kopia[i] = wsk[i];//skopiowanie wartosci do drugiej tablicy
	}
}
void MenuFloat::generacja_rosnaco(int liczba)
{
	liczba_elementow = liczba;
	wsk = new float[liczba_elementow];
	wsk_kopia = new float[liczba_elementow];
	for (int i = 0; i < liczba_elementow; i++)
	{
		wsk[i] = float(i);
		wsk_kopia[i] = float(i);

	}
}
void MenuFloat::generacja_malejaco(int liczba)
{
	liczba_elementow = liczba;
	wsk = new float[liczba_elementow];
	wsk_kopia = new float[liczba_elementow];
	int k = liczba_elementow;
	for (int i = 0; i < liczba_elementow; i++)
	{
		wsk[i] = float(k);
		wsk_kopia[i] = float(k);
		k--;
	}
}

void MenuFloat::generacja_33(int liczba)
{
	liczba_elementow = liczba;
	wsk = new float[liczba_elementow];
	wsk_kopia = new float[liczba_elementow];
	int podzial = (liczba_elementow * 33) / 100;

	for (int i = 0; i < podzial; i++)
	{
		wsk[i] = float(i);
		wsk_kopia[i] = float(i);
	}
	for (int i = podzial; i < liczba_elementow; i++)
	{
		wsk[i] = ((float)(rand()) / (float)(rand()))+float(podzial);
		wsk_kopia[i] = wsk[i];
	}
}

void MenuFloat::generacja_66(int liczba)
{
	liczba_elementow = liczba;
	wsk = new float[liczba_elementow];
	wsk_kopia = new float[liczba_elementow];
	int podzial = (liczba_elementow * 66) / 100;

	for (int i = 0; i < podzial; i++)
	{
		wsk[i] = float(i);
		wsk_kopia[i] = float(i);
	}
	for (int i = podzial; i < liczba_elementow; i++)
	{
		wsk[i] = ((float)(rand()) / (float)(rand()))+float(podzial);
		wsk_kopia[i] = wsk[i];
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
					wsk[i - 1] = stof(wiersz);//zamian ana float i wstawienie do tabeli
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