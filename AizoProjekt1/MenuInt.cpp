#include <iostream>
#include "MenuInt.h"
#include"MenuAbstr.h"

using namespace std;
int MenuInt::liczba_elementow = 0;
int* MenuInt::wsk = nullptr; //wskaznik na dynamiczn� tablice
int* MenuInt::wsk_kopia = nullptr;


//PRZENOSZENIE TABLIC DO PONOWENGO SORTOWANIE ??JAKIES KOPIIOWANIE Z WSK DO WSK_KOPPIA???
void MenuInt:: generacja()
{
	cout << "Podaj liczbe elemntow: ";
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

void MenuInt::wyjscie()
{
	delete[] wsk; //usuwanie dynamicznych tablic; //PO ZMIANIE TYPU DANYCH BLŁAD trzeba jkaos zadeklarowac wskazniki
	delete[] wsk_kopia;
	liczba_elementow = 0;
	wsk = nullptr;
	wsk_kopia = nullptr;
}
void MenuInt::zaladuj_ponownie_poprzednia_tablica()
{
	for (int i = 0; i < liczba_elementow; i++)//generacja losowych wartosci
	{
		
		wsk_kopia[i] = wsk[i]; //sortowanie przeprowadzane na tablicy wsk_kopia
	}
}


void MenuInt::sort_wstawianie()
{
	

	int k;//obecnie por�wnywany elemtn 
	int liczba;//por�wnywany elemnt
	
	for (int i = 1; i < liczba_elementow; i++)
	{
		k = i - 1;
		liczba = wsk_kopia[i];
		while (k >= 0 && wsk_kopia[k] > liczba)
		{
			wsk_kopia[k + 1] = wsk_kopia[k];

			k--;
		}
		wsk_kopia[k + 1] = liczba;
	}
	


}
void MenuInt::sort_kopcowanie() {
	

	for (int i = liczba_elementow / 2 - 1; i >= 0; i--) naprawa_kopca( i, liczba_elementow);

	for (int i = liczba_elementow - 1; i > 0; i--)
	{
		swap(wsk_kopia[0], wsk_kopia[i]);
		naprawa_kopca( 0, i);
	}
	

}

void MenuInt::naprawa_kopca( int korzen, int rozmiar)
{
	int rodzic = korzen;
	int prawe_dziecko = 2 * rodzic + 1;
	int lewe_dziecko = 2 * rodzic + 2;
	if (lewe_dziecko < rozmiar && wsk_kopia[lewe_dziecko ]> wsk_kopia[rodzic])
	{
		rodzic = lewe_dziecko;
	}
	if (prawe_dziecko<rozmiar && wsk_kopia[prawe_dziecko]>wsk_kopia[rodzic])
	{
		rodzic = prawe_dziecko;
	}
	if (rodzic != korzen)
	{
		swap(wsk_kopia[korzen], wsk_kopia[rodzic]);
		naprawa_kopca( rodzic, rozmiar);
	}
}
//PIVOT LEWO

void MenuInt::quick_sort_wywolanie_Lp()
{

	quick_sort_Lp(wsk_kopia, 0, liczba_elementow);
}


int MenuInt::quick_sort_podzial_Lp(int tab[], int poczatek, int koniec)
{

	int pivot = tab[poczatek];
	int l = poczatek;
	int r = koniec;
	while (true)
	{
		while (tab[l] < pivot)l++;
		while (tab[r] > pivot)r--;
		if (r > l)
		{
			swap(tab[l], tab[r]);
			r--;
			l++;
		}
		else {
			if (r == koniec)r--;
			return r;
		}
	}
}

void MenuInt::quick_sort_Lp(int tab[], int poczatek, int koniec)
{
	if (poczatek >= koniec)
	{
		return;
	}
	int polowa = quick_sort_podzial_Lp(tab, poczatek, koniec);
	quick_sort_Lp(tab, poczatek, polowa);
	quick_sort_Lp(tab, polowa + 1, koniec);


}
//PIVOT SRODEK
void MenuInt::quick_sort_wywolanie_Sp()
{

	quick_sort_Sp(wsk_kopia, 0, liczba_elementow);
}

int MenuInt::quick_sort_podzial_Sp(int tab[], int poczatek, int koniec)
{

	int pivot = tab[(poczatek+koniec)/2];
	int l = poczatek;
	int r = koniec;
	while (true)
	{
		while (tab[l] < pivot)l++;
		while (tab[r] > pivot)r--;
		if (r > l)
		{
			swap(tab[l], tab[r]);
			r--;
			l++;
		}
		else {
			if (r == koniec)r--;
			return r;
		}
	}
}

void MenuInt::quick_sort_Sp(int tab[], int poczatek, int koniec)
{
	if (poczatek >= koniec)
	{
		return;
	}
	int polowa = quick_sort_podzial_Sp(tab, poczatek, koniec);
	quick_sort_Sp(tab, poczatek, polowa);
	quick_sort_Sp(tab, polowa + 1, koniec);


}
//PIVOT PRAWO

void MenuInt::quick_sort_wywolanie_Pp()
{

	quick_sort_Pp(wsk_kopia, 0, liczba_elementow);
}

int MenuInt::quick_sort_podzial_Pp(int tab[], int poczatek, int koniec)
{

	int pivot = tab[koniec];
	int l = poczatek;
	int r = koniec;
	while (true)
	{
		while (tab[l] < pivot)l++;
		while (tab[r] > pivot)r--;
		if (r > l)
		{
			swap(tab[l], tab[r]);
			r--;
			l++;
		}
		else {
			if (r == koniec)r--;
			return r;
		}
	}
}

void MenuInt::quick_sort_Pp(int tab[], int poczatek, int koniec)
{
	if (poczatek >= koniec)
	{
		return;
	}
	int polowa = quick_sort_podzial_Pp(tab, poczatek, koniec);
	quick_sort_Pp(tab, poczatek, polowa);
	quick_sort_Pp(tab, polowa + 1, koniec);


}
//PIVOT RANDOM ??DODAC LSOOWANIE??

void MenuInt::quick_sort_wywolanie_Rp()
{

	quick_sort_Rp(wsk_kopia, 0, liczba_elementow);
}

int MenuInt::quick_sort_podzial_Rp(int tab[], int poczatek, int koniec)
{

	int pivot = tab[poczatek];
	int l = poczatek;
	int r = koniec;
	while (true)
	{
		while (tab[l] < pivot)l++;
		while (tab[r] > pivot)r--;
		if (r > l)
		{
			swap(tab[l], tab[r]);
			r--;
			l++;
		}
		else {
			if (r == koniec)r--;
			return r;
		}
	}
}

void MenuInt::quick_sort_Rp(int tab[], int poczatek, int koniec)
{
	if (poczatek >= koniec)
	{
		return;
	}
	int polowa = quick_sort_podzial_Lp(tab, poczatek, koniec);
	quick_sort_Lp(tab, poczatek, polowa);
	quick_sort_Lp(tab, polowa + 1, koniec);


}