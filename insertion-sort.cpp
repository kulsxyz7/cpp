#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

// Function untuk sorting Array
void insertionSort(int A[], int n)
{
    int hole,i,j;
    for ( i = 0; i < n - 1; i++ ) {
        hole = A[i];
        j=i-1;
        // memindahkan element dari arr[0...i-1]
        // yang lebih besar dari int hole, dari posisi didepan nya
        // ke posisi sebelumnya

        while ( j>0 && A[j] > hole) {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = hole;
    }

}

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
    insertionSort(A,6);
    cout<<"Data Sesudah di Sorting = "<<endl;
    for ( int i = 0; i < 6; i++ ) {
        cout<< A[i]<<" ";
    }
}