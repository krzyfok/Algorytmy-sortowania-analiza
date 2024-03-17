#include <iostream>
#include "MenuInt.h"
#include"MenuAbstr.h"
using namespace std;

int MenuAbstr::liczba_elementow = 0;
int* MenuAbstr::wsk = nullptr;

 

void MenuAbstr::generacja()
{
	cin >> liczba_elementow;
	wsk = new int[liczba_elementow];
	for (int i = 0; i < liczba_elementow; i++)
	{
		wsk[i] = rand();
	}
	for (int i = 0; i < liczba_elementow; i++)
	{
		cout << wsk[i] << "\n";
	}
	
}
void MenuAbstr::sort_wstawianie(int liczba_elementow)
{
	cout << liczba_elementow;
}