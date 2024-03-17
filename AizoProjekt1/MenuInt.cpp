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
}