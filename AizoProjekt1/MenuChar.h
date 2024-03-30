#ifndef MENUCHAR_H
#define MENUCHAR_H
#include"MenuAbstr.h"
class	MenuChar : public MenuAbstr {
private:
	static int liczba_elementow;
	static char* wsk;
	static char* wsk_kopia; //wskaznik na kopie tablicy, na niej wykonywane b�dzie sortowanie


public:

	void generacja() override;
	void sort_wstawianie_wywolanie() override;
	void wczytwanie_tablicy_z_pliku()override;
	void  wyswietlanie_przed_sortowaniem_wywolanie() override;
	void  wyswietlanie_po_sortowaniu_wywolanie()override;
	void sort_kopcowanie_wywolanie() override;
	void usuwanie_wywolanie()override;
	void sprawdzenie_poprawnosci_sortowania_wywolanie()override;
	void kopiowanie_tablicy_wywolanie()override;
	//qcksort pivot lewo

	void quick_sort_wywolanie_Lp()override;

	//qcksort pivot srodek

	void quick_sort_wywolanie_Sp()override;

	//qcksort pivot prawo

	void quick_sort_wywolanie_Pp()override;

	//qcksort pivot random

	void quick_sort_wywolanie_Rp()override;

	void shell_v1_wywolanie()override;
	void shell_v2_wywolanie()override;
};
#endif