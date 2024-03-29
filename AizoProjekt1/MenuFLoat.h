#ifndef MENUFLOAT_H
#define MENUFLOAT_H
#include"MenuAbstr.h"
class	MenuFloat : public MenuAbstr {
private:
	static int liczba_elementow;
	static int* wsk;
	static int* wsk_kopia; //wskaznik na kopie tablicy, na niej wykonywane b�dzie sortowanie
	void generacja() override;
	void sort_wstawianie() override;
	void wczytwanie_z_pliku()override;

	void  wyswietlanie_przed_sortowaniem() override;
	void wyswietlanie_po_sortowaniu()override;
	void wyjscie()override;
	void zaladuj_ponownie_poprzednia_tablica()override;
	void sort_kopcowanie() override;
	void naprawa_kopca( int korzen, int rozmiar) override;

	//qcksort pivot lewo
	int quick_sort_podzial_Lp(int tab[], int poczatek, int koniec) override;
	void quick_sort_Lp(int tab[], int poczatek, int koniec) override;
	void quick_sort_wywolanie_Lp()override;

	//qcksort pivot srodek
	int quick_sort_podzial_Sp(int tab[], int poczatek, int koniec) override;
	void quick_sort_Sp(int tab[], int poczatek, int koniec) override;
	void quick_sort_wywolanie_Sp()override;

	//qcksort pivot prawo
	int quick_sort_podzial_Pp(int tab[], int poczatek, int koniec) override;
	void quick_sort_Pp(int tab[], int poczatek, int koniec) override;
	void quick_sort_wywolanie_Pp()override;
	
	//qcksort pivot random
	int quick_sort_podzial_Rp(int tab[], int poczatek, int koniec) override;
	void quick_sort_Rp(int tab[], int poczatek, int koniec) override;
	void quick_sort_wywolanie_Rp()override;

	void shell_v1()override;
	void shell_v2()override;
};
#endif