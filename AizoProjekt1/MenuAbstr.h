#pragma once
class MenuAbstr {
public:
	static int liczba_elementow;
	static int* wsk;
	static int* wsk_kopia; //wskaznik na kopie tablicy, na niej wykonywane bêdzie sortowanie
	 static void menu();
	virtual void generacja();
	virtual void wyswietlanie();
	static void sort_menu(MenuAbstr obj);
	virtual void sort_wstawianie(int liczba_elementow);
	virtual void sort_kopcowanie(int liczba_elementów);
	virtual void naprawa_kopca(int tab[], int rodzic, int rozmiar);
	
};