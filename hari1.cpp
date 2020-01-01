#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main () {

    int n,H,hIni;
    
    cout<<"Masukan N hari yang lalu : ";
    cin>>H;
    cout<<"Masukan Hari Ini : ";
    cin>>hIni;
    n = H-hIni;
    if ( n == 1 ) {
        cout<<"Hari ini Adalah Senin";
        cout<<"Kemarin adalah Hari Minggu";
    }
    else if ( n == 2 ) {
        cout<<"Hari ini Adalah Selasa";
        cout<<"Kemarin adalah Hari Senin";
    }
    else if ( n == 3 ) {
        cout<<"Hari ini Adalah Rabu";
        cout<<"Kemarin adalah Hari Selasa";
    }
    else if ( n == 4 ) {
        cout<<"Hari ini Adalah Kamis";
        cout<<"Kemarin adalah Hari Rabu";
    }
    else if ( n == 5 ) {
        cout<<"Hari ini adalah Jum'at";
        cout<<"Kemarin adalah Kamis";
    }
    else if ( n == 6 ) {
        cout<<"Hari ini adalah Sabtu";
        cout<<"Kemarin adalah Hari Jum'at";
    }
    else if ( n == 7 ) {
        cout<<"Hari ini adalah Minggu";
        cout<<"Kemarin adalah Hari Sabtu"
    }
    else {
        cout<<"Anda Salah Input";
    }

}