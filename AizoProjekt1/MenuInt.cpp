#include <iostream>
#include "MenuInt.h"
#include"MenuAbstr.h"
#include"LicznikCzasu.h"
using namespace std;

int MenuAbstr::liczba_elementow = 0;
int* MenuAbstr::wsk = nullptr; //wskaznik na dynamiczn� tablice
int* MenuAbstr::wsk_kopia = nullptr;

 

void MenuAbstr::generacja()
{
	cout << "Podaj liczbe elemnt�w: ";
	cin >> liczba_elementow;
	wsk = new int[liczba_elementow];
	wsk_kopia = new int[liczba_elementow];
	for (int i = 0; i < liczba_elementow; i++)//generacja losowych wartosci
	{
		wsk[i] = rand();
		wsk_kopia[i] = wsk[i]; //sortowanie przeprowadzane na tablicy wsk_kopia
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
	LicznikCzasu obj;
	
	int k;//obecnie por�wnywany elemtn 
	int liczba;//por�wnywany elemnt
	obj.start();
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
	obj.stop();

	
}
void MenuAbstr::sort_kopcowanie(int liczba_element�w) {
	LicznikCzasu obj;
	

}

void MenuAbstr::naprawa_kopca(int tab[],int rodzic,int rozmiar)
{
	int najwieksza = rodzic;
	int prawe_dziecko=2*rodzic+1;
	int lewe_dziecko= 2* rodzic+2;


}