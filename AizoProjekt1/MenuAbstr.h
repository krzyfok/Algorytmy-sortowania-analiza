#pragma once
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class MenuAbstr {
public:
	
	static int liczba_elementow;
	
	void menu(MenuAbstr& obj);

	template<class T>
	 void sort_wstawianie(T tab[], int liczba_elementow)
	{
		T liczba;//porównywany element
		int k;//poprzedni element
		
		for (int i = 1; i < liczba_elementow; i++)
		{
			k = i - 1;
			liczba = tab[i];//wybranie wartosci obecnie sortowanej
			while (k >= 0 && tab[k] > liczba)//przesuwanie wartosci w lewo aż obecna liczba będzie nie większa od wartosci z którą jest porównywana, lub do końca tabeli
			{
				tab[k + 1] = tab[k];//przesunięcie wartości poprzedniej o indeks do przodu, by zrobić miejsce dla wartosci obecnie sortowanej
				k--;
			}
			tab[k + 1] = liczba; //po wyjsciu z pętli i znalezieniu odpoweiniej pozycji nastęuje przypisanie wartosci sortowanej do tej pozycji
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
		 for (int krok = liczba_elementow/2; krok > 0; krok = krok / 2)//ustalenie obecnego kroku
		 {
			 for (int i = krok; i < liczba_elementow; i++)
			 {
				 int j;
				 T element_sprawdzany = tab[i];//wybranie obecnie sortowanego elementu
				 for (j = i; j >= krok && tab[j - krok] > element_sprawdzany; j = j - krok)//porówynwanie elmentu sortowanego z elementem o mniejszym indeksie oddalonym o krok, przesuwanie w lewo aż znajdzie sie element nie mniejszy
				 {
					 tab[j] = tab[j - krok];//zrobienie miejsca dla wartosci sortowanej
				 }
				 tab[j] = element_sprawdzany;//wpisanie  elementu na własciwą pozycje
			 }
		 }
	 }
	 template<class T>
	 void shell_v2(T tab[], int liczba_elementow)
	 {
		 for (int krok = 21; krok > 0; krok = krok - 5)
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
		 T pivot = tab[poczatek]; //wybranie lewej skranej wartości jako pivota
		 int l = poczatek;
		 int r = koniec;
		 while (true)
		 {
			 while (tab[l] < pivot)l++;//przesuwanie l w prawo aż znajdzie wartość nie mniejszą od pivota
			 while (tab[r] > pivot)r--;//przesuwanie r w lewo aż znajdzie wartosć nie większą od pivot
			 if (r > l)//sprawdzenie czy nie nastąpiło minięcie
			 {
				 swap(tab[l], tab[r]);//zamiana wartosci z indeksów l i r
				 r--;
				 l++;
			 }
			 else {
				 if (r == koniec)r--;
				 return r;//jeżeli nastąpiło minięcie zwaracana jest wartość r
			 }
		 }
	 }

	 template<class T>
	 void quick_sort_Lp(T tab[], int poczatek, int koniec)
	 {
		 if (poczatek >= koniec)//sprawdzenie czy funkcja nie została wywołana na pojedynczym elemencie
		{
			return;
		}
		int polowa = quick_sort_podzial_Lp(tab, poczatek, koniec);//wywołanie funkcji podziału na 2 tablice
		quick_sort_Lp(tab, poczatek, polowa);//wywołanie funkcji quick_sort_Lp dla kolejnych 2 tablic
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
		 for (int i = liczba_elementow / 2 - 1; i >= 0; i--) naprawa_kopca(i, liczba_elementow,tab);//utworzenie kopca

		 for (int i = liczba_elementow - 1; i > 0; i--)
		 {
			 swap(tab[0], tab[i]);//zamiana korzenia kopca z ostanim elementem w tablicy, nie będzie on brany pod uwage przy kolejnej iteracji
			 naprawa_kopca(0, i,tab);//naprawa kopca w dół
		 }
	 }

	 template<class T>
	 void naprawa_kopca(int korzen, int rozmiar, T tab[])
	 {
		 int rodzic = korzen;
		 int prawe_dziecko = 2 * rodzic + 1;//wyznaczenie indeksow dzieci dla rodzica
		 int lewe_dziecko = 2 * rodzic + 2;
		 if (lewe_dziecko < rozmiar && tab[lewe_dziecko]> tab[rodzic])//sprawdzenie potrzeby zamiany
		 {
			 rodzic = lewe_dziecko;
		 }
		 if (prawe_dziecko<rozmiar && tab[prawe_dziecko]>tab[rodzic])
		 {
			 rodzic = prawe_dziecko;
		 }
		 if (rodzic != korzen)
		 {
			 swap(tab[korzen],tab[rodzic]);//zamiana dziecka i rodzica, jeżeli dziecko jest większe od rodzica
			 naprawa_kopca(rodzic, rozmiar,tab);//kontynuacja naprawy w doł
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
	//deklaracje metod wirtulanych
	virtual void generacja(int liczba)=0;
	virtual void generacja_malejaco(int liczba) = 0;
	virtual void generacja_rosnaco(int liczba) = 0;
	virtual void generacja_33(int liczba) = 0;
	virtual void generacja_66(int liczba) = 0;
	virtual void wczytwanie_tablicy_z_pliku() = 0;
	//metody menu
	void sort_menu(MenuAbstr& obj);
	void qck_sort_menu(MenuAbstr& obj);
	void shell_menu(MenuAbstr& obj);
	//generacja
	int generacja_liczba_elementow();
	



	//wywolania szablonow
	virtual void kopiowanie_tablicy_wywolanie() = 0;
	virtual void sprawdzenie_poprawnosci_sortowania_wywolanie()=0;
	virtual void usuwanie_wywolanie() = 0;

	virtual void wyswietlanie_przed_sortowaniem_wywolanie() = 0;
	virtual void wyswietlanie_po_sortowaniu_wywolanie() = 0;


	virtual double sort_wstawianie_wywolanie() = 0;

	virtual double sort_kopcowanie_wywolanie() = 0;

	virtual double quick_sort_wywolanie_Lp()=0;
	
	
	virtual double quick_sort_wywolanie_Sp() = 0;
	
	
	virtual double quick_sort_wywolanie_Pp() = 0;

	
	virtual double quick_sort_wywolanie_Rp() = 0;
	
	
	//SHELL Z ORGINALNYM KROKIEM
	virtual double shell_v1_wywolanie() = 0;
	//SHELL 5 3 1
	virtual double shell_v2_wywolanie() = 0;
};

