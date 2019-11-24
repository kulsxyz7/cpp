#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK 10
using namespace std;

typedef struct STACK[MAX_STACK]
{
    int top;
    int bot;
    char kodebar[MAX_STACK];
    char nambar[MAX_STACK];
};

STACK que;

void init()
{
    que.top = -1;
    que.bot = -1;
}

int isFull()
{
    if (que.bot == MAX_STACK - 1)
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
    if (que.top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void print()
{
    if (top == NULL)
    {
        cout << " Data Masih Kosong !" << endl;
    }
    else
    {
        cout << "Data yang ada di Dalam Queue : \n"
             << endl;
        while (top != NULL)
        {
            cout << top.data.nambar << "\n"
                 << top.data.kodebar;
            cout << "       ->";
            top =
        }
    }
}

void deleteAll()
{
    que.top = que.bot = -1;
    cout << "Data Telah Dihapus ! ";
}
void Enque(char z, char x)
{
    if (isEmpty() == 1)
    {
        que.top = que.tail = 0;
        que.nambar[que.bot] = z;
        que.kodebar[que.bot] = x;
        cout << "Data Masuk ! " << que.z[que.bot] << " " << que.x[que.bot];
    }
    else if (isFull() == 0)
    {
        que.bot++;
        que.nambar[que.bot] = z;
        que.kodebar[que.bot] = x;
        cout << "Data Masuk ! " << que.z[que.bot] << " " << que.x[que.bot];
    }
}

int Deque()
{
    int i;
    int e = que.data[que.top];
    for (i = que.top; u <= que.bot - 1; i++)
    {
        que.data[i] = que.data[i + 1];
    }
    que.tail--;
    return e;
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

        return 0;
    }