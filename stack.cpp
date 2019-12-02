#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX_STACK 10
using namespace std;

typedef struct STACK
{
    char data[10][10];
};

STACK tumpuk;

void init()
{
    tumpuk.top = -1;
}

int isFull()
{
    if (tumpuk.top == MAX_STACK - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty()
{
    if (tumpuk.top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void Push(char d[10])
{
    tumpuk.top++;
    strcpy(tumpuk.data[tumpuk.top], d);
}

void Pop()
{
    cout << "Data yang terambil = \n"
         << tumpuk.data[tumpuk.top];
    tumpuk.top--;
}

void clearAll()
{
    tumpuk.top = -1;
}

void cetak()
{
    for (int i = tumpuk.top; i >= 0; i--;)
    {
        cout << "Data : \n"
             << tumpuk.data[i];
    }
}

int main()
{
    int pil;
    init();
    char dt[10];
    do
    {
        cout << "========== MENU ==========" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Print" << endl;
        cout << "4. Clear All" << endl;
        cout << "5. Exit" << endl;
        cout << "Masukan Pilihan = ";
        cin >> pil;
        if (pil == 1)
        {
            if (isFull() != 1)
            {
                cout << "Data = ";
                cin >> dt;
                Push(dt);
            }
            else
            {
                cout << "Data Sudah Penuh";
            }
        }
        else if (pil == 2)
        {
            if (isEmpty() != 1)
            {
                Pop();
            }
            else
            {
                cout << "Data Masih Kosong ! ";
            }
        }
        else if (pil == 3)
        {
            if (isEmpty() != 1)
            {
                cetak();
            }
            else
            {
                cout << "Data Masih Kosong ! ";
            }
        }
        else if (pil == 4)
        {
            clearAll();
            cout << "Data Terhapus ! ";
        }
        else
        {
            cout << "Input Salah ! ";
        }
        getch();
    } while (pil != 5);
    getch();
}