#pragma once
class MenuAbstr {
public:
	
	void menu(MenuAbstr& obj);
private:
	virtual void generacja()=0;
	virtual void wyswietlanie_przed_sortowaniem()=0;
	virtual void wyswietlanie_po_sortowaniu() = 0;
	virtual void wyjscie() = 0;
	virtual void zaladuj_ponownie_poprzednia_tablica() = 0;
	void sort_menu(MenuAbstr& obj);
	void qck_sort_menu(MenuAbstr& obj);
	virtual void sort_wstawianie()=0;
	virtual void sort_kopcowanie()=0;
	virtual void naprawa_kopca( int korzen, int rozmiar)=0;

	virtual void quick_sort_wywolanie_Lp()=0;
	virtual int quick_sort_podzial_Lp(int tab[],int poczatek,int koniec) = 0;
	virtual void quick_sort_Lp(int tab[], int poczatek, int koniec) = 0;
	
	virtual void quick_sort_wywolanie_Sp() = 0;
	virtual int quick_sort_podzial_Sp(int tab[], int poczatek, int koniec) = 0;
	virtual void quick_sort_Sp(int tab[], int poczatek, int koniec) = 0;
	
	virtual void quick_sort_wywolanie_Pp() = 0;
	virtual int quick_sort_podzial_Pp(int tab[], int poczatek, int koniec) = 0;
	virtual void quick_sort_Pp(int tab[], int poczatek, int koniec) = 0;
	
	virtual void quick_sort_wywolanie_Rp() = 0;
	virtual int quick_sort_podzial_Rp(int tab[], int poczatek, int koniec) = 0;
	virtual void quick_sort_Rp(int tab[], int poczatek, int koniec) = 0;
};