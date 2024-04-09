#include<iostream>
#include"MainMenu.h"
#include"MenuInt.h"
#include"MenuFloat.h"
#include"MenuDouble.h"
#include"MenuChar.h"
#include"MenuAbstr.h"
#include"Testowanie.h"
using namespace std;
void MainMenu::main_menu() {
	while (true)
	{
		printf("WYBIERZ TYP DANYCH\n");
		printf("1.INT\n");
		printf("2.FLOAT\n");
		printf("3.DOUBLE\n");
		printf("4.CHAR\n");
		printf("5.TESTOWANIE\n");
		printf("6.WYJSCIE\n");


		int x;
		cin >> x;
		switch (x)
		{
		case 1://stworzenie obiektu wybranej klasy i wywolanie menu
		{
			MenuInt menu_i;
			menu_i.menu(menu_i);
		}

		break;
		case 2:
		{
			MenuFloat menu_f;
			menu_f.menu(menu_f);
		}
			break;

		case 3:
		{
			MenuDouble menu_d;
			menu_d.menu(menu_d);
		}
			break;
		case 4: {
			MenuChar menu_c;
			menu_c.menu(menu_c);

		}
			break;
		case 5:
			Testowanie test;
			test.testowanie();
			break;
		case 6:
			exit(0);
			break;
		default:
			break;
		}
	}


}