
#include<iostream>
#include"MenuAbstr.h"
#include"LicznikCzasu.h"
using namespace std;




void MenuAbstr::menu(MenuAbstr& obj)
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
		printf("7.ZALADUJ PONOWNIE POPRZEDNIA TABLICE\n");
		printf("8.ZMIANA TYPU\n");

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
			obj.sort_menu(*this);
			break;
		case 7:
			obj.zaladuj_ponownie_poprzednia_tablica();
			break;
		case 8:
			
			obj.wyjscie();
			return;

		default:
			break;
		}

	}

}
void MenuAbstr::qck_sort_menu(MenuAbstr& obj)
{
	
	LicznikCzasu licznik;

	printf("WYBIERZ MIEJSCE PIVOTA\n");
	printf("1.LEWO\n");
	printf("2.SRODEK\n");
	printf("3.PRAWO\n");
	printf("4.LOSOWO\n");
	printf("5.COFNIJ\n");


	int x;
	cin >> x;
	switch (x)
	{
	case 1:
	{
		
			licznik.start();
			obj.quick_sort_wywolanie_Lp();
			licznik.stop();
			break;
		
	}
	case 2:
	{
		licznik.start();
		obj.quick_sort_wywolanie_Sp();
		licznik.stop();
		break;
	}
	case 3:
	{
		licznik.start();
		obj.quick_sort_wywolanie_Pp();
		licznik.stop();
		break;
	}
	case 4:
	{
		licznik.start();
		obj.quick_sort_wywolanie_Rp();
		licznik.stop();
		break;
	}
	case 5: 
		return;
	}
}


void MenuAbstr::sort_menu(MenuAbstr& obj)
{
	LicznikCzasu licznik;

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
	{
		licznik.start();
		obj.sort_wstawianie();
		licznik.stop();
	}
	break;
	case 2:
	{
		licznik.start();
		obj.sort_kopcowanie();
		licznik.stop();
	}
	break;

	case 4:
	{//DODAC PODMENU DO WYBORU

		obj.qck_sort_menu(*this);
	}
	case 5:
		return;
	}


}


