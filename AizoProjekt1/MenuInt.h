#ifndef MENUINT_H
#define MENUINT_H
#include"MenuAbstr.h"
class	MenuInt : public MenuAbstr {
private:
	
	static int* wsk;
	static int* wsk_kopia; //wskaznik na kopie tablicy, na niej wykonywane b�dzie sortowanie
	

public:
	
	void generacja(int liczba) override;
	void generacja_malejaco(int liczba) override;
	void generacja_rosnaco(int liczba) override;
	void generacja_33(int liczba) override;
	void generacja_66(int liczba) override;
	void wczytwanie_tablicy_z_pliku()override;
	void  wyswietlanie_przed_sortowaniem_wywolanie() override;
	void  wyswietlanie_po_sortowaniu_wywolanie()override;
	
	void usuwanie_wywolanie()override;
	void sprawdzenie_poprawnosci_sortowania_wywolanie()override;
	void kopiowanie_tablicy_wywolanie()override;

	double sort_wstawianie_wywolanie() override;

	double sort_kopcowanie_wywolanie() override;
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