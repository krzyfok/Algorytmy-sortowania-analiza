#pragma once
class MenuAbstr {
public:
	static int liczba_elementow;
	static int* wsk;
	 static void menu();
	virtual void generacja();
	static void sort_menu(MenuAbstr obj);
	virtual void sort_wstawianie(int liczba_elementow);
	
};