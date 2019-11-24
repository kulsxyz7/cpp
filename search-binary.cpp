#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

//search sentinel
int main()
{

    int z[15];
    int count, find, first, last, mid;

    cout << "Masukan Jumlah Data = ";
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cout << "Masukan Data ke - " << i << " = ";
        cin >> z[i];
    }

    cout << "=================================" << endl;
    cout << "Masukan Data yang dicari = ";
    cin >> find;
    first = 0;
    last = count - 1;
    mid = (first + last) / 2;
    while (first <= last)
    {
        mid = (first + last) / 2;
        if (find > z[mid])
        {
            first = mid + 1;
        }
        else if (find < z[mid])
        {
            last = mid - 1;
        }
        else
        {
            first = last + 1;
        }
        if (find == z[mid])
        {
            cout << "Data yang dicari berada di " << mid << endl;
        }
        else
        {
            cout << "Tidak ada di dalam Array !";
        }
        getch();
    }
}