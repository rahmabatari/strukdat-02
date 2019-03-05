/*
 Nama   : Rahma Batari
 NPM    : 140810180051
 Kelas  : A
 Tanggal: 5 Februari 2019
*/

#include <iostream>
#include <string.h>
using namespace std;

struct Orang{
    int umur;
    char nama[30];
    char jk[1];
    char goldar[1];
};

int main(){
    Orang orang;
    orang.umur=10;
    strcpy(orang.nama, "fahmi");
    strcpy(orang.goldar, "O");
    strcpy(orang.jk, "L");
    
    
    cout<<orang.umur<<endl;
    cout<<orang.nama<<endl;
    cout<<orang.goldar<<endl;
    cout<<orang.jk<<endl;
}



