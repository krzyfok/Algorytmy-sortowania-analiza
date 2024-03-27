
#include<iostream>
#include"MenuAbstr.h"
using namespace std;


int MenuAbstr::liczba_elementow = 0;
int* MenuAbstr::wsk = nullptr; //wskaznik na dynamiczn� tablice
int* MenuAbstr::wsk_kopia = nullptr;

void MenuAbstr::menu()
{
	
	while (true)
	{
		printf("MENU\n");
		printf("1.WCZYTAJ TABLICE Z PLIKU\n");
		printf("2.ZAPISZ WYNIK SORTOWANIA DO PLIKU\n");
		printf("3.WYGENERUJ TABLICE\n");
		printf("4.WYSWIETL TABLICE\n");
		printf("5.SORTUJ\n");
		printf("6.ZBIERANIE DANYCH\n");
		printf("7.ZMIANA TYPU\n");

		int x;
		cin >> x;
		switch (x)
		{
		case 3:
			generacja();
			break;
		case 4:
			wyswietlanie();
			break;
		case 5:
			sort_menu(*this);
			break;
		case 7:
			delete[] wsk; //usuwanie dynamicznych tablic; // SPRAWDZIC CZY USUWANIE COS ZMIENIA>> PRZENIESC TABLICE Z INT NA FLOAT PO DODANIU MENU FLOAT!!!!!!
			delete[] wsk_kopia;
			return;

		default:
			break;
		}

	}

}
void MenuAbstr::sort_menu(MenuAbstr& obj)
{


	printf("WYBIERZ TRYB SORTOWANIA\n");
	printf("1.PRZEZ WSTAWIANIE\n");
	printf("2.PRZEZ KOPCOWANIE\n");
	printf("3.SHELLA\n");
	printf("4.SZYBKIE\n");
	printf("5.COFNIJ\n");


	int x;
	cin >> x;
	switch (x)
	{
	case 1:
	{ obj.sort_wstawianie(liczba_elementow, wsk_kopia); }
		break;
	case 2:
	{ obj.sort_kopcowanie(liczba_elementow, wsk_kopia); }
		break;
	}



}


