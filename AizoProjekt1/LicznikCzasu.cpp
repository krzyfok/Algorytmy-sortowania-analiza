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
 double LicznikCzasu::stop()
{
    LARGE_INTEGER li;
    QueryPerformanceCounter(&li);
    return double(li.QuadPart - CounterStart) / PCFreq;//milisekundy
}