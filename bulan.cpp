#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main () {

    int n, bln, blnIni;

    cout<<"Masukan Bulan Sekarang = ";
    cin>>blnIni;
    cout<<"N bulan Kedepan = ";
    cin>>n;

    if ( (blnIni + n) <= 12 ) {
        bln = blnIni + n ;
    }
    else {
        bln = ( blnIni + n ) % 12;
    }

    cout<<"Bulan Pernikahan "<<bln;
}