
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
			printf("4.SORTUJ\n");
			printf("5.ZBIERANIE DANYCH\n");
			printf("6.ZMIANA TYPU\n");

			int x;
			cin >> x;
			switch (x)
			{
			case 2:
				obj.generacja();
				break;
			case 3: 
				obj.wyswietlanie();
				break;
			case 4:
				sort_menu(obj);
				break;
			case 6:
				return;
				
			default:
				break;
			}
			
		}

	}
 void MenuAbstr::sort_menu(MenuAbstr obj)
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
			 obj.sort_wstawianie(liczba_elementow);
			 break;
		 }


	 
 }



