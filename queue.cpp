#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK 10
using namespace std;

int main()
{

    typedef struct STACK[MAX_STACK]
    {
        int top;
        int bot;
        int data[10];
    };

    STACK que;

    void init()
    {
        que.top = -1;
        que.bot = -1;
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

    void push(char d[10])
    {
        que.top++;
        strcpy(que.data[que.top], d);
    }

    void popUp()
    {
        cout << "Data yang Terambil = " << que.data[que.top];
        que.top--;
    }

    int peek()
    {
        return que.data[que.top];
    }

    void create()
    {
        que.top = que.bot = -1;
    }

    void Enqueue(int data)
    {
        if (isEmpty() == 1)
        {
            que.top = que.bot = 0;
            que.data[que.bot] = data;
            cout << "Data Masuk ! " << que.data[que.bot];
        }
        else if (isFull() == 0)
        {
            que.bot++;
            que.data[que.bot] = data;
            cout << "Data Masuk ! " << que.data[que.bot];
        }
    }

    int Deque()
    {
        int i;
        int e = que.data[que.top] for (i = que.top; i <= que.tail - 1; i++)
        {
            que.data[i] = que.data[i + 1];
        }
        que.tail--;
        return e;
    }

    void deleteAll()
    {
        que.top = que.tail = -1;
        cout << "Data Telah Dihapus ! ";
    }

    void print()
    {
        if (isEmpty() == 0)
        {
            for (int i = que.head; i <= que.tail; i++)
            {
                cout << que.data[i];
            }
            else
            {
                cout << "Data Kosong ! ";
            }
        }
    }

    return 0;
}