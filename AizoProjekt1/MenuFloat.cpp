#include <iostream>
#include "MenuFloat.h"
#include"MenuAbstr.h"
#include"LicznikCzasu.h"
using namespace std;
int MenuFloat::liczba_elementow = 0;
int* MenuFloat::wsk = nullptr; //wskaznik na dynamiczn� tablice
int* MenuFloat::wsk_kopia = nullptr;

void MenuFloat:: generacja() 
{
	printf("a");
}
void MenuFloat::wczytwanie_z_pliku()
{

}
void MenuFloat::sort_wstawianie()
{
	printf("a");
}

void MenuFloat:: wyswietlanie_po_sortowaniu()
{
	
		for (int i = 0; i < liczba_elementow; i++)
		{
			cout << wsk_kopia[i] << ",";
		}
		cout << "\n";
}
void MenuFloat::wyswietlanie_przed_sortowaniem()
{
	
	for (int i = 0; i < liczba_elementow; i++)
	{
		cout << wsk[i] << ",";
	}
	cout << "\n";
}
void MenuFloat::zaladuj_ponownie_poprzednia_tablica()
{

}

void MenuFloat::wyjscie()
{
				delete[] wsk; //usuwanie dynamicznych tablic; //PO ZMIANIE TYPU DANYCH BLŁAD trzeba jkaos zadeklarowac wskazniki
				delete[] wsk_kopia;
				liczba_elementow = 0;
				wsk = nullptr;
				wsk_kopia = nullptr;
}
void MenuFloat::sort_kopcowanie()
{
	printf("a");
}

void MenuFloat :: naprawa_kopca( int korzen, int rozmiar)
{

}
void MenuFloat::quick_sort_wywolanie_Lp()
{

}

int MenuFloat::quick_sort_podzial_Lp(int tab[], int poczatek, int koniec)
{
	return 0;
}

void MenuFloat::quick_sort_Lp(int tab[], int poczatek, int koniec)
{

}

void MenuFloat::quick_sort_wywolanie_Sp()
{

}
int MenuFloat::quick_sort_podzial_Sp(int tab[], int poczatek, int koniec)
{
	return 0;
}

void MenuFloat::quick_sort_Sp(int tab[], int poczatek, int koniec)
{

}
void MenuFloat::quick_sort_wywolanie_Pp()
{

}
int MenuFloat::quick_sort_podzial_Pp(int tab[], int poczatek, int koniec)
{
	return 0;
}

void MenuFloat::quick_sort_Pp(int tab[], int poczatek, int koniec)
{

}

void MenuFloat::quick_sort_wywolanie_Rp()
{

}
int MenuFloat::quick_sort_podzial_Rp(int tab[], int poczatek, int koniec)
{
	return 0;
}

void MenuFloat::quick_sort_Rp(int tab[], int poczatek, int koniec)
{

}
void MenuFloat::shell_v1()
{

}
void MenuFloat::shell_v2()
{

}