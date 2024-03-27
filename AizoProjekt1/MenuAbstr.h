#pragma once
class MenuAbstr {
public:
	static int liczba_elementow;
	static int* wsk;
	static int* wsk_kopia; //wskaznik na kopie tablicy, na niej wykonywane b�dzie sortowanie
	void menu();
	virtual void generacja()=0;
	virtual void wyswietlanie()=0;
	static void sort_menu(MenuAbstr& obj);
	virtual void sort_wstawianie(int liczba_elementow, int tab[])=0;
	virtual void sort_kopcowanie(int liczba_element�w, int tab[])=0;
	virtual void naprawa_kopca(int tab[], int korzen, int rozmiar)=0;

};