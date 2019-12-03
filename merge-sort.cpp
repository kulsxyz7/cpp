#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;



int main()
{

    int A[] = {23, 1, 5, 43, 8, 7};

    cout << "Data Sebelum di Sort = " << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << A[i] << "  ";
    }
    cout << endl
         << endl;
    
    cout<<"Data Sesudah di Sorting = "<<endl;
    for ( int i = 0; i < 6; i++ ) {
        cout<< A[i]<<" ";
    }
}