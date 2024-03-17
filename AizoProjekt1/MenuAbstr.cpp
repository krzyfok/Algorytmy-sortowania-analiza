
#include<iostream>
#include"MenuAbstr.h"
using namespace std;
 void MenuAbstr :: menu()
	{
	 MenuAbstr obj;
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
				obj.generacja();

			default:
				break;
			}
		}

	}
 



