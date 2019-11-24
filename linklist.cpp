#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

//Homework Alrogrithm & Structur Data

class q
{
public:
    char input;
};

struct node
{
    q data;
    node *next;
};

node *head;
node *tail;
node *entry;
node *help;
node *dlt;
node *cetak;
node *baru;

void init()
{
    head = NULL;
    tail = NULL;
}

int isEmpty()
{
    if (tail == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void dataBaru()
{
    baru = new node;
    cout << "Input Data (1 Karakter) = ";
    cin >> baru->data.input;
    baru->next = NULL;
}

void input(q nd)
{
    entry = (node *)malloc(sizeof(node));
    entry->data = nd;
    entry->next = NULL;

    if (head == NULL)
    {
        head = entry;
        tail = head;
    }
    else
    {
        tail->next = entry;
        tail = entry;
    }
}

void deleteALL()
{
    node *help, *dlt;
    help = head;
    if (head == NULL)
    {
        cout << "Linked List Kosong ! " << endl;
    }
    else
    {
        help->data = head->data;
        cout << "Data yang dihapus adalah = " << endl;
        while (help != NULL)
        {
            cout << help->data.input << "\n";
            dlt = help;
            help = help->next;
            delete dlt;
        }
    }
    head = NULL;
    tail = NULL;
}

void print()
{
    cetak = head;

    if (head == NULL)
    {
        cout << "Data Masih Kosong" << endl;
    }
    else
    {
        cout << "Data yang ada di dalam Linked List : \n"
             << endl;
        while (cetak != NULL)
        {
            cout << cetak->data.input;
            cout << " -> ";
            cetak = cetak->next;
        }
        cout << "NULL" << endl;
    }
}

void insertDepan()
{
    dataBaru();
    if (isEmpty() == 1)
    {
        head = tail = baru;
        tail->next = NULL;
    }
    else
    {
        baru->next = head;
        head = baru;
    }
    cout << "Data Masuk\n";
}

void insertBelakang()
{
    dataBaru();
    if (isEmpty() == 1)
    {
        head = baru;
        tail = baru;
        tail->next = NULL;
    }
    else
    {
        tail->next = baru;
        tail = baru;
    }
    cout << "Data Masuk\n";
}

void menu()
{
    char pil, tanya;
    node data;

    do
    {
        fflush(stdin);
        system("cls");

        cout << "============== MENU ==============" << endl;
        cout << "1. Input Depan" << endl;
        cout << "2. Input Belakang" << endl;
        cout << "3. Hapus Node" << endl;
        cout << "4. Cetak Node" << endl;
        cout << "5. Exit" << endl;
        cout << " Masukan pilihan = ";
        cin >> pil;
        cout << endl;

        if (pil == '1')
        {
            fflush(stdin);
            insertDepan();
        }
        else if (pil == '2')
        {
            fflush(stdin);
            insertBelakang();
        }
        else if (pil == '3')
        {
            deleteALL();
        }
        else if (pil == '4')
        {
            print();
        }
        else if (pil == '5')
        {
            exit(0);
        }
        else
        {
            cout << "Anda Salah Input" << endl;
            cout << "Coba Lagi ? (Y/T) " << endl;
            cin >> tanya;
        }
        cout << "Kembali ke Menu ? (Y/T) ";
        cin >> tanya;
    } while (tanya == 'y' || tanya == 'Y');
}

int main()
{
    init();
    menu();

    return EXIT_SUCCESS;
}
