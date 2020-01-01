#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main () {

    int bil, nilaiTertinggi, jumlah=0, input;

    cout<<"Berapa Bilangan yg mau di Input = ";
    cin>>input;

    int arr[input];

    // looping Input bilangan
    cout<<"Masukan "<<input<<"Bilangan\n";
    for ( int i=0;i<input;i++ ) {
        cout<<"Bilangan ke-"<<i+1<<"= ";
        cin>>arr[i];
    }

    // mencari bilangan Tertinggi
    nilaiTertinggi = arr[0];
    for ( int i=0;i<input;i++ ) {
        if ( arr[i] > nilaiTertinggi ) {
            nilaiTertinggi = arr[i];
            bilangan = i+1;
        }
    }

    // menghitung banyaknya nilai Tertinggi
    for ( int i=0;i<input;i++ ) {
        if ( nilaiTertinggi ==arr[i] ) {
            jumlah++;
        }
    }

    // Hasilnya
    cout<<"Nilai Tertinggi = "<<nilaiTertinggi<<endl;
    cout<<"Jumlah = "<<jumlah;

}