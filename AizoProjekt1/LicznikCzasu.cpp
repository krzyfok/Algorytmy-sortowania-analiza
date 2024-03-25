#include"LicznikCzasu.h"
#include"windows.h"
using namespace std;
#include<iostream>
void LicznikCzasu::start()//milisekundy
{
    LARGE_INTEGER li;
    if (!QueryPerformanceFrequency(&li))
        cout << "QueryPerformanceFrequency failed!\n";

    PCFreq = double(li.QuadPart) / 1000.0;

    QueryPerformanceCounter(&li);
    CounterStart = li.QuadPart;
}
 void LicznikCzasu::stop()
{
    LARGE_INTEGER li;
    QueryPerformanceCounter(&li);
    cout<< double(li.QuadPart - CounterStart) / PCFreq<<endl;
}