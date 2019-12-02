#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

void SelectionSort(int A[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int iMin = 1; //menentukan posisis i : elemen dari i sampai n-1 adalah kandidatnya
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[iMin])
            {
                iMin = j;
            }
        }
        int temp = A[i];
        A[i] = A[iMin];
        A[iMin] = temp;
    }
}

int main()
{

    int A[] = {23, 43, 1, 22, 5, 8};
    SelectionSort(A, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << A[i] << " ";
    }
}