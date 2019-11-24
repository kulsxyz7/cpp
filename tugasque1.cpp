#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STACK 10
using namespace std;

typedef struct STACK[MAX_STACK]
{
    int top;
    int bot;
    string data[MAX_STACK];
};

STACK que;

void init()
{
    que.top = -1;
    que.bot = -1;
}

int isEmpty()
{
    if (que.top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull()
{
    if (que.top == MAX_STACK - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(char d[10])
{
    que.top++;
    strcpy(que.data[que.top], d);
}

int main()
{

    char pil, tanya;
    que queue;

    do
    {
        cout << "\tMENU" << endl;
        cout << "1. Input Data Queue" << endl;
        cout << "2. Delete Data Queue" << endl;
        cout << "3. Print Data Queue" << endl;
        cout << "4. Delete All Queue" << endl;
        cout << "Masukan Pilihan = ";
        cin >> pil;

        if (pil == '1')
        {
            fflush(stdin);
            cout << "Masukan Nama Buku = ";
            cin >> queue.data.nambar;
            cout << "Masukan Kode Buku = ";
            cin >> queue.data.kodebar;

            input(queue.data);
            cout << "Input Data lagi ? (Y/N) ";
            cin >> tanya;
            else if (pil == '2')
            {
                Deque();
            }
            else if (pil == '3')
            {
                print();
            }
            else if (pil == '4')
            {
                deleteAll();
            }
            else
            {
                cout << "Input Salah ! " << endl;
                cout << "Coba Lagi ? (Y/N)";
                cin >> tanya;
            }
            while (tanya == 'y' || tanya == 'Y')
                ;
        }
