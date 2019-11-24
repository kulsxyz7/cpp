#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

//search sentinel
int main()
{

    int z[15];
    int input, input1, cari = 0;

    cout << "Masukan Jumlah Data = ";
    cin >> input;

    for (int i = 0; i < input; i++)
    {
        cout << "Input Data ke - " << i << "= ";
        cin >> z[i];
    }

    cout << "============================================";
    cout << "Masukan Elemen yang dicari = ";
    cin >> input1;

    for (int i = 0; i < input; i++)
    {
        if (z[i] == input1)
        {
            cari = 1;
            cout << "Angka " << input1 << " ada di Posisi " << i;
            cout << endl;
        }
    }
    if (cari == 0)
    {
        cout << "Angka " << input1 << " Tidak ada didalam Array ! ";
    }
    getch();
}