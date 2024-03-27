#include <iostream>
#include "MenuInt.h"
#include"MenuAbstr.h"
#include"LicznikCzasu.h"
using namespace std;

int MenuInt::liczba_elementow = 0;
int* MenuInt::wsk = nullptr; //wskaznik na dynamiczn� tablice
int* MenuInt::wsk_kopia = nullptr;


void MenuInt:: generacja()
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

void MenuInt::wyswietlanie()
{
	for (int i = 0; i < liczba_elementow; i++)
	{
		cout << wsk_kopia[i] << "\n";
	}
}
void MenuInt::sort_wstawianie(int liczba_elementow, int tab[])
{
	LicznikCzasu obj;

	int k;//obecnie por�wnywany elemtn 
	int liczba;//por�wnywany elemnt
	obj.start();
	for (int i = 1; i < liczba_elementow; i++)
	{
		k = i - 1;
		liczba = tab[i];
		while (k >= 0 && tab[k] > liczba)
		{
			tab[k + 1] = tab[k];

			k--;
		}
		tab[k + 1] = liczba;
	}
	obj.stop();


}
void MenuInt::sort_kopcowanie(int rozmiar, int tab[]) {
	LicznikCzasu obj;
	for (int i = rozmiar / 2 - 1; i >= 0; i--) naprawa_kopca(tab, i, rozmiar);

	for (int i = rozmiar - 1; i > 0; i--)
	{
		swap(tab[0], tab[i]);
		naprawa_kopca(tab, 0, i);
	}


}

void MenuInt::naprawa_kopca(int tab[], int korzen, int rozmiar)
{
	int rodzic = korzen;
	int prawe_dziecko = 2 * rodzic + 1;
	int lewe_dziecko = 2 * rodzic + 2;
	if (lewe_dziecko < rozmiar && tab[lewe_dziecko > tab[rodzic]])
	{
		rodzic = lewe_dziecko;
	}
	if (prawe_dziecko<rozmiar && tab[prawe_dziecko]>tab[rodzic])
	{
		rodzic = prawe_dziecko;
	}
	if (rodzic != korzen)
	{
		swap(tab[korzen], tab[rodzic]);
		naprawa_kopca(tab, rodzic, rozmiar);
	}
}