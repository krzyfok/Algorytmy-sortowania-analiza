#include <iostream>
#include "MenuInt.h"
#include"MenuAbstr.h"
using namespace std;

int MenuAbstr::liczba_elementow = 0;
int* MenuAbstr::wsk = nullptr; //wskaznik na dynamiczn¹ tablice
int* MenuAbstr::wsk_kopia = nullptr;

 

void MenuAbstr::generacja()
{
	cout << "Podaj liczbe elemntów: ";
	cin >> liczba_elementow;
	wsk = new int[liczba_elementow];
	wsk_kopia = new int[liczba_elementow];
	for (int i = 0; i < liczba_elementow; i++)//generacja losowych wartosci
	{
		wsk[i] = rand();
		wsk_kopia[i] = wsk[i];
	}
	for (int i = 0; i < liczba_elementow; i++)
	{
		cout << wsk[i] << "\n";
	}
	
}

void MenuAbstr::wyswietlanie()
{
	for (int i = 0; i < liczba_elementow; i++)
	{
		cout << wsk_kopia[i] << "\n";
	}
}
void MenuAbstr::sort_wstawianie(int liczba_elementow)
{
	

	int k;//obecnie porównywany elemtn 
	int liczba;//porównywany elemnt
	for (int i = 1; i < liczba_elementow; i++)
	{
		k = i - 1;
		liczba = wsk_kopia[i];
		while (k>=0 && wsk_kopia[k]>liczba)
		{
			wsk_kopia[k+1] = wsk_kopia[k];
			
			k--;
		}
		wsk_kopia[k + 1] = liczba;
	}

	
}