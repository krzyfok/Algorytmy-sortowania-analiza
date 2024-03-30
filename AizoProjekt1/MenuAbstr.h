#pragma once
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class MenuAbstr {
public:

	void menu(MenuAbstr& obj);

	template<class T>
	 void sort_wstawianie(T tab[], int liczba_elementow)
	{
		int k;//obecnie por�wnywany elemtn 
		T liczba;//por�wnywany elemnt

		for (int i = 1; i < liczba_elementow; i++)
		{
			k = i - 1;
			liczba = tab[i];
			while (k >= 0 && tab[k] > liczba)
			{
				tab[k + 1] = tab[k];

				k--;
			}
			tab[k + 1] = liczba;
		}
	}
	 template<class T>
	 void wyswietlanie(T tab[], int liczba_elementow)
	 {
		 for (int i = 0; i < liczba_elementow; i++)
		 {

			  cout << tab[i] << ",";
		 }
		 cout << "\n";
	 }

	 template<class T>
	 void shell_v1(T tab[], int liczba_elementow)
	 {
		 for (int krok = liczba_elementow / 2; krok > 0; krok = krok / 2)
		 {
			 for (int i = krok; i < liczba_elementow; i++)
			 {
				 int j;
				 T element_sprawdzany = tab[i];
				 for (j = i; j >= krok && tab[j - krok] > element_sprawdzany; j = j - krok)
				 {
					 tab[j] = tab[j - krok];

				 }
				 tab[j] = element_sprawdzany;
			 }
		 }
	 }
	 template<class T>
	 void shell_v2(T tab[], int liczba_elementow)
	 {
		 for (int krok = 5; krok > 0; krok = krok - 2)
		 {
			 for (int i = krok; i < liczba_elementow; i++)
			 {
				 int j;
				 T element_sprawdzany = tab[i];
				 for (j = i; j >= krok && tab[j - krok] > element_sprawdzany; j = j - krok)
				 {
					 tab[j] = tab[j - krok];

				 }
				 tab[j] = element_sprawdzany;
			 }
		 }
	 }

	 template<class T>
	 int quick_sort_podzial_Lp(T tab[], int poczatek, int koniec)
	 {
		 T pivot = tab[poczatek];
		 int l = poczatek;
		 int r = koniec;
		 while (true)
		 {
			 while (tab[l] < pivot)l++;
			 while (tab[r] > pivot)r--;
			 if (r > l)
			 {
				 swap(tab[l], tab[r]);
				 r--;
				 l++;
			 }
			 else {
				 if (r == koniec)r--;
				 return r;
			 }
		 }
	 }

	 template<class T>
	 void quick_sort_Lp(T tab[], int poczatek, int koniec)
	 {
		 if (poczatek >= koniec)
	{
		return;
	}
	int polowa = quick_sort_podzial_Lp(tab, poczatek, koniec);
	quick_sort_Lp(tab, poczatek, polowa);
	quick_sort_Lp(tab, polowa + 1, koniec);
	 }


	 template<class T>
	 int quick_sort_podzial_Sp(T tab[], int poczatek, int koniec)
	 {
		 T pivot = tab[(poczatek + koniec) / 2];
		 int l = poczatek;
		 int r = koniec;
		 while (true)
		 {
			 while (tab[l] < pivot)l++;
			 while (tab[r] > pivot)r--;
			 if (r > l)
			 {
				 swap(tab[l], tab[r]);
				 r--;
				 l++;
			 }
			 else {
				 if (r == koniec)r--;
				 return r;
			 }
		 }
	 }

	 template<class T>
	 void quick_sort_Sp(T tab[], int poczatek, int koniec)
	 {
		 if (poczatek >= koniec)
		 {
			 return;
		 }
		 int polowa = quick_sort_podzial_Sp(tab, poczatek, koniec);
		 quick_sort_Sp(tab, poczatek, polowa);
		 quick_sort_Sp(tab, polowa + 1, koniec);
	 }

	 template<class T>
	 int quick_sort_podzial_Pp(T tab[], int poczatek, int koniec)
	 {
		 T pivot = tab[koniec];
		 int l = poczatek;
		 int r = koniec;
		 while (true)
		 {
			 while (tab[l] < pivot)l++;
			 while (tab[r] > pivot)r--;
			 if (r > l)
			 {
				 swap(tab[l], tab[r]);
				 r--;
				 l++;
			 }
			 else {
				 if (r == koniec)r--;
				 return r;
			 }
		 }
	 }

	 template<class T>
	 void quick_sort_Pp(T tab[], int poczatek, int koniec)
	 {
		 if (poczatek >= koniec)
		 {
			 return;
		 }
		 int polowa = quick_sort_podzial_Pp(tab, poczatek, koniec);
		 quick_sort_Pp(tab, poczatek, polowa);
		 quick_sort_Pp(tab, polowa + 1, koniec);
	 }

	 template<class T>
	 int quick_sort_podzial_Rp(T tab[], int poczatek, int koniec)
	 {
		 T pivot = tab[rand() % (koniec - poczatek) + poczatek];
		 int l = poczatek;
		 int r = koniec;
		 while (true)
		 {
			 while (tab[l] < pivot)l++;
			 while (tab[r] > pivot)r--;
			 if (r > l)
			 {
				 swap(tab[l], tab[r]);
				 r--;
				 l++;
			 }
			 else {
				 if (r == koniec)r--;
				 return r;
			 }
		 }
	 }

	 template<class T>
	 void quick_sort_Rp(T tab[], int poczatek, int koniec)
	 {
		 if (poczatek >= koniec)
		 {
			 return;
		 }
		 int polowa = quick_sort_podzial_Rp(tab, poczatek, koniec);
		 quick_sort_Rp(tab, poczatek, polowa);
		 quick_sort_Rp(tab, polowa + 1, koniec);
	 }

	 template<class T>
	 void sort_kopcowanie(T tab[], int liczba_elementow)
	 {
		 for (int i = liczba_elementow / 2 - 1; i >= 0; i--) naprawa_kopca(i, liczba_elementow,tab);

		 for (int i = liczba_elementow - 1; i > 0; i--)
		 {
			 swap(tab[0], tab[i]);
			 naprawa_kopca(0, i,tab);
		 }
	 }
	
	 template<class T>
	 void naprawa_kopca(int korzen, int rozmiar, T tab[])
	 {
		 int rodzic = korzen;
		 int prawe_dziecko = 2 * rodzic + 1;
		 int lewe_dziecko = 2 * rodzic + 2;
		 if (lewe_dziecko < rozmiar && tab[lewe_dziecko]> tab[rodzic])
		 {
			 rodzic = lewe_dziecko;
		 }
		 if (prawe_dziecko<rozmiar && tab[prawe_dziecko]>tab[rodzic])
		 {
			 rodzic = prawe_dziecko;
		 }
		 if (rodzic != korzen)
		 {
			 swap(tab[korzen],tab[rodzic]);
			 naprawa_kopca(rodzic, rozmiar,tab);
		 }
	 }

	template<class T>
	void kopiowanie_tablicy(T tab[], T tab1[],int liczba_elementow)
	{
		for (int i = 0; i < liczba_elementow; i++)//generacja losowych wartosci
		{

			tab1[i] = tab[i]; //sortowanie przeprowadzane na tablicy wsk_kopia
		}
	}

	template<class T>
	void usuwanie(T tab[], T tab1[], int &liczba_elementow)
	{
		delete[] tab; //usuwanie dynamicznych tablic;
		delete[] tab1;
		liczba_elementow = 0;
		tab = nullptr;
		tab1 = nullptr;
	}

	template<class T>
	void sprawdzanie_poprawnosci_sortowania(T tab[], int liczba_elementow)
	{
		for (int i = 0;i < liczba_elementow-1; i++)
		{
			if (tab[i] > tab[i + 1])
			{
				cout << "NIEPOPRAWNE SORTOWANIE"<<endl;
				return;
			}
		}
		cout << "POPRAWNE SORTOWANIE" << endl;
	}
	
	virtual void generacja()=0;
	virtual void wczytwanie_tablicy_z_pliku() = 0;
	void sort_menu(MenuAbstr& obj);
	void qck_sort_menu(MenuAbstr& obj);
	void shell_menu(MenuAbstr& obj);

	



	//wywolania szablonow
	virtual void kopiowanie_tablicy_wywolanie() = 0;
	virtual void sprawdzenie_poprawnosci_sortowania_wywolanie()=0;
	virtual void sort_kopcowanie_wywolanie() = 0;
	virtual void usuwanie_wywolanie() = 0;

	virtual void wyswietlanie_przed_sortowaniem_wywolanie() = 0;
	virtual void wyswietlanie_po_sortowaniu_wywolanie() = 0;
	virtual void sort_wstawianie_wywolanie() = 0;

	virtual void quick_sort_wywolanie_Lp()=0;
	
	
	virtual void quick_sort_wywolanie_Sp() = 0;
	
	
	virtual void quick_sort_wywolanie_Pp() = 0;

	
	virtual void quick_sort_wywolanie_Rp() = 0;
	
	
	//SHELL Z ORGINALNYM KROKIEM
	virtual void shell_v1_wywolanie() = 0;
	//SHELL 5 3 1
	virtual void shell_v2_wywolanie() = 0;
};

