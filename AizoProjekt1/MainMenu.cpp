#include<iostream>
#include"MainMenu.h"
#include"MenuInt.h"
#include"MenuAbstr.h"
#include"MenuFloat.h"
using namespace std;
void MainMenu::main_menu() {
	while (true)
	{
		printf("WYBIERZ TYP DANYCH\n");
		printf("1.INT\n");
		printf("2.FLOAT\n");
		printf("3.DOUBLE\n");
		printf("4.CHAR\n");
		printf("5.WYJSCIE\n");


		int x;
		cin >> x;
		switch (x)
		{
		case 1:
		{
			MenuInt menu_i;
			menu_i.menu();
		}

		break;
		case 2:
		{
			MenuFloat menu_f;
			menu_f.menu();
		}
			break;

		case 3:
			break;
		case 4:
			break;

		case 5:
			exit(0);
			break;
		default:
			break;
		}
	}


}