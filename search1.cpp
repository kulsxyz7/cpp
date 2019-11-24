#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main()
{

    int z[10];
    int input;

    for (int i = 0; i < 10; i++)
    {
        cout << "Input Data ke - " << i << "= ";
        cin >> z[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cout << z[i];
        cout << "=========================================================================";
        cout << endl;
        cout << "Angka yang dicari = ";
        cin >> input;
        cout << endl;
        for (int i = 0; i < 10; i++)
        {
            if (z[i] == input)
            {
                cout << "Angka yang dicari berada di index ke-" << i << endl;
            }
        }
        getch();
    }
}