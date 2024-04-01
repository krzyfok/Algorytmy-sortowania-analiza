
#include<iostream>
#include"MenuAbstr.h"
#include"LicznikCzasu.h"
using namespace std;


int MenuAbstr::liczba_elementow = 0;
LicznikCzasu licznik;

void MenuAbstr::menu(MenuAbstr& obj)
{
	
	while (true)
	{
		printf("MENU\n");
		printf("1.WCZYTAJ TABLICE Z PLIKU\n");
		printf("2.WYGENERUJ TABLICE\n");
		printf("3.WYSWIETL TABLICE PRZED SORTOWANIEM\n");
		printf("4.WYSWIETL TABLICE PO SORTOWANIU\n");
		printf("5.SORTUJ\n");
		printf("6.SPRAWDZ POPRAWNOSC\n");
		printf("7.ZMIANA TYPU\n");

		int x;
		cin >> x;
		switch (x)
		{
		case 1:
			wczytwanie_tablicy_z_pliku();
			break;
		case 2:
			generacja();
			break;
		case 3:
			if(liczba_elementow!=0)wyswietlanie_przed_sortowaniem_wywolanie();
			else { cout << "BRAK ELEMENTOW" << endl; }
			break;
		case 4:
			if(liczba_elementow!=0)	wyswietlanie_po_sortowaniu_wywolanie();
			else { cout << "BRAK ELEMENTOW" << endl; }
			break;
		case 5:
			if(liczba_elementow!=0)sort_menu(*this);
			else { cout << "BRAK ELEMENTOW" << endl; }
			break;
		case 6:
			sprawdzenie_poprawnosci_sortowania_wywolanie();
			break;
		case 7:
			
			usuwanie_wywolanie();
			return;

		default:
			break;
		}

	}

}
void MenuAbstr::qck_sort_menu(MenuAbstr& obj)
{

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
		
			
			
			cout << obj.quick_sort_wywolanie_Lp() <<" milisekund"<< endl;
			break;
		
	}
	case 2:
	{
		
		cout << obj.quick_sort_wywolanie_Sp() << " milisekund" << endl;
		break;
	}
	case 3:
	{
		
		cout<< obj.quick_sort_wywolanie_Pp() << " milisekund" << endl;
		break;
	}
	case 4:
	{
		
		
		cout<< obj.quick_sort_wywolanie_Rp() << " milisekund" << endl;
		break;
	}
	case 5: 
		return;
	}
}

void MenuAbstr::shell_menu(MenuAbstr& obj)
{
	printf("WYBIERZ ALGORYTM\n");
	printf("1.KLASYCZNY\n");
	printf("2.5,3,1\n");
	printf("3.COFNIJ\n");


	int x;
	cin >> x;
	switch (x)
	{
	case 1:
		
		
		cout<< obj.shell_v1_wywolanie() << " milisekund" << endl;
		break;
	case 2:
		
		
		cout<< obj.shell_v2_wywolanie() << " milisekund" << endl;
		break;
	case 3:
		return;
	}

}
void MenuAbstr::sort_menu(MenuAbstr& obj)
{
	obj.kopiowanie_tablicy_wywolanie();
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
		
		
		cout<< obj.sort_wstawianie_wywolanie() << " milisekund" << endl;
	}
	break;
	case 2:
	{
		
		
		cout<< obj.sort_kopcowanie_wywolanie() << " milisekund" << endl;
	}
	break;
	case 3:
	{
		obj.shell_menu(*this);
		break;
	}
		break;
	case 4:
	{

		obj.qck_sort_menu(*this);
		break;
	}
	case 5:
		return;
	}


}




