#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main () {

    int n;
    cout<<"\t Daftar Nama Hari "<<endl;
    cout<<"1. Senin"<<endl;
    cout<<"2. Selasa"<<endl;
    cout<<"3. Rabu"<<endl;
    cout<<"4. Kamis"<<endl;
    cout<<"5. Jum'at"<<endl;
    cout<<"6. Sabtu"<<endl;
    cout<<"7. Minggu"<<endl;
    cout<<endl;
    
    cout<<"Masukan Hari Ini : ";
    cin>>n;
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