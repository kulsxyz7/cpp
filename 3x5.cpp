#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
    int a = 3;
    int b = 5;
    int x, z, matrik[a][b], matriks[a][b];

    cout << "\tMatriks 1 " << endl;
    for (x = 0; x < a; x++)
    {
        for (z = 0; z < b; z++)
        {
            cout < " Input Matriks 1 (" << x << "," << z << ") = ";
            cin >> matrik[x][z];
        }
    }

    cout << endl;
    cout << "\tMatriks Pertama = " << endl;
    for (x = 0; x < a; x++)
    {
        for (z = 0; z < b; z++)
        {
            cout << matrik[x][z];
            cout << " ";
        }
        cout << "\n";
    }

    for (x = 0; x < a; x++)
    {
        for (z = 0; z < b; z++)
        {
            matriks[z][x] = matrik[x][z];
        }
    }

    cout << endl
         << "Hasil Transpose Matriks = " << endl;
    for (z = 0; z < b; z++)
    {
        for (x = 0; x < a; x++)
        {
            cout << matriks[z][x];
            cout << " ";
        }
        cout << "\n";
    }

    return 0;
}