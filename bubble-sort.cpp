#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

void bubbleSort(int A[], int n)
{
    // function Sorting
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            // mengecek jika value sebelumnya lebih besar dari value selanjutnya atau tidak
            if (A[j] > A[j + 1])
            {
                // membuat penyimpanan temporary
                // value dari array[j]
                // dan menukar tempat valuenya
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main()
{

    int A[] = {23, 1, 5, 43, 8, 12};

    cout << "Data Sebelum di Bubble Sort = " << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << A[i] << "  ";
    }
    cout << endl
         << endl;

    bubbleSort(A, 6);
    cout << "Data sesudah di Bubble Sort = " << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << A[i] << "  ";
    }
}
