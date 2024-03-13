#include <iostream>
#include "MenuInt.h"
using namespace std;

int MenuInt::liczba_elementow = 0;
int* MenuInt::wsk = nullptr;

 void MenuInt::menu()
{
	while (true)
	{
		printf("MENU\n");
		printf("1.WCZYTAJ TABLICE\n");
		printf("2.WYGENERUJ TABLICE\n");
		printf("3.WYSWIETL TABLICE\n");
		printf("4.WYBIERZ ALGORYTM SORTOWANIA\n");
		printf("5.ZBIERANIE DANYCH\n");
		printf("6.ZMIANA TYPU\n");
		
			int x;
			cin >> x;
			switch (x)
			{
			case 2:
				 generacja();
				
			default:
				break;
			}
		}
	
	}

void MenuInt::generacja()
{
	cin >> liczba_elementow;
	wsk = new int[liczba_elementow];
}