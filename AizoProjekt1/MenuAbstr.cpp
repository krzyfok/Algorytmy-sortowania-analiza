
#include<iostream>
#include"MenuAbstr.h"
using namespace std;
 void MenuAbstr :: menu()
	{
	 MenuAbstr obj;
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
				obj.generacja();
				break;
			case 4: 
				obj.wyswietlanie();
				break;
			case 5:
				sort_menu(obj);
				break;
			case 7:
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
		 case 2:
			 obj.sort_kopcowanie(liczba_elementow);
			 break;
		 }


	 
 }



