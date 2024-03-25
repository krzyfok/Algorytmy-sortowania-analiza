#ifndef MENUINT_H
#define MENUINT_H
#include"MenuAbstr.h"
class	MenuInt : public MenuAbstr {
	public:
		static int liczba_elementow;
		static int* wsk;
		static int* wsk_kopia;
		//void generacja() override;
		//void sort_wstawianie() override;
};
#endif