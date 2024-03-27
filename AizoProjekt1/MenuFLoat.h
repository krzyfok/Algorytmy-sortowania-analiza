#ifndef MENUFLOAT_H
#define MENUFLOAT_H
#include"MenuAbstr.h"
class	MenuFloat : public MenuAbstr {
	static int liczba_elementow;
	static int* wsk;
	static int* wsk_kopia;
	void generacja() override;
	void sort_wstawianie(int liczba_elementow, int tab[]) override;
	void  wyswietlanie() override;
	void sort_kopcowanie(int rozmiar, int tab[]) override;
	void naprawa_kopca(int tab[], int korzen, int rozmiar) override;
};
#endif