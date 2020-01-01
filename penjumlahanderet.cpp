#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main () {

    int i,j,k=0;
    
    cout<<"Input = ";
    cin>>i;
    cout<<"Proses = ";
    j=1;
    
    while ( j <= i ) {
        cout<<j;
        if ( j!= i ) {
            cout<<"+";
        }

        k=k+j;
        j=j+1;
    }
    cout<<endl;
    cout<<"Output = "<<k;
}