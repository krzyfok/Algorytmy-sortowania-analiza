#ifndef MENUDOUBLE_H
#define MENUDOUBLE_H
#include"MenuAbstr.h"
class	MenuDouble : public MenuAbstr {
private:
	static double* wsk;
	static double* wsk_kopia; //wskaznik na kopie tablicy, na niej wykonywane b�dzie sortowanie
	

public:

	void generacja(int liczba) override;
	void wczytwanie_tablicy_z_pliku()override;
	void  wyswietlanie_przed_sortowaniem_wywolanie() override;
	void  wyswietlanie_po_sortowaniu_wywolanie()override;
	void usuwanie_wywolanie()override;
	void sprawdzenie_poprawnosci_sortowania_wywolanie()override;
	void kopiowanie_tablicy_wywolanie()override;

	double sort_kopcowanie_wywolanie() override;

	double sort_wstawianie_wywolanie() override;
	//qcksort pivot lewo

	double quick_sort_wywolanie_Lp()override;

	//qcksort pivot srodek

	double quick_sort_wywolanie_Sp()override;

	//qcksort pivot prawo

	double quick_sort_wywolanie_Pp()override;

	//qcksort pivot random

	double quick_sort_wywolanie_Rp()override;

	double shell_v1_wywolanie()override;
	double shell_v2_wywolanie()override;
};
#endif