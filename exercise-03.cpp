/*
 Nama   : Rahma Batari
 NPM    : 140810180051
 Kelas  : A
 Tanggal: 5 Februari 2019
 */

#include <iostream>
#include <stdlib.h>
using namespace std;

struct Pegawai{
    string NIP;
    string nama;
    int golongan;
    int gaji;
};

Pegawai pegawai[20];

void banyakData(int &n){
    cout<<"Masukkan jumlah pegawai : ";
    cin>>n;
}
void inputPegawai(Pegawai pegawai[],int &n){
    for (int i=0;i<n;i++){
        cout << "Masukkan data pegawai " << i+1 << endl;
        cout << "NIP        : "; cin >> pegawai[i].NIP;
        cout << "Nama       : "; cin >> pegawai[i].nama;
		getline(cin,pegawai[i].nama);
        cout << "Golongan   : "; cin >> pegawai[i].golongan;
        cout << endl;
    }
}

void sortingGol(Pegawai pegawai[], int &n){
    int i;
    Pegawai temp;
    for(i=1; i<n; i++){
        temp = pegawai[i];
        while(i>0 && pegawai[i-1].golongan>temp.golongan){
            pegawai[i]= pegawai[i-1];
            i = i-1;
        }
        pegawai[i]= temp;
    }
}

void sortingNIP(Pegawai pegawai[], int &n){
    int i;
    Pegawai temp;
    for(i=1; i<n; i++){
        temp = pegawai[i];
        while(i>0 && pegawai[i-1].NIP>temp.NIP){
            pegawai[i] = pegawai[i-1];
            i = i-1;
        }
        pegawai[i]= temp;
    }
    
}

void cariGaji (Pegawai pegawai[], int &n){
    for (int i=0; i<n; i++){
        if (pegawai[i].golongan == 1){
            pegawai[i].gaji=2000000;
        }
        else if (pegawai[i].golongan == 2){
            pegawai[i].gaji=3000000;
        }
        else if (pegawai[i].golongan == 3){
            pegawai[i].gaji=5000000;
        }
        else if (pegawai [i].golongan == 4){
            pegawai[i].gaji=8000000;
        }
    }
}

int rataRaji (Pegawai pegawai [], int &n, int& rataGaji){
    int gajiTotal=0;
    for (int i=0 ; i<n ; i++){
        gajiTotal= gajiTotal+pegawai[i].gaji;
    }
    rataGaji=gajiTotal/n;
    return(rataGaji);
}

void rajiTerendah (Pegawai pegawai[], int n, int rataGaji){
    sortingNIP(pegawai, n);
    cariGaji(pegawai, n);
    for (int i=0; i<n;i++){
        cout << "NIP    : " << pegawai[i].NIP << endl;
        cout << "Nama   : " << pegawai[i].nama << endl;
        cout << "Gaji   : " << pegawai[i].gaji << endl;
        cout << endl;
    }
    rataRaji(pegawai, n, rataGaji);
    cout << "Rata-rata Gaji Pegawai : " << rataGaji << endl;
}

void gajiTertinggi (Pegawai pegawai[], int n, int rataGaji){
    sortingGol(pegawai, n);
    cout<<"Pegawai dengan gaji tertinggi : "<<pegawai[n-1].nama<<endl;
    cout<<"Pegawai dengan gaji terendah : "<<pegawai[0].nama<<endl;
}

int main(){
    int n, rataGaji;
    banyakData(n);
    inputPegawai(pegawai,n);
    system("cls");
    cout << "DAFTAR PEGAWAI\n";
    rajiTerendah (pegawai, n, rataGaji);
    gajiTertinggi (pegawai, n, rataGaji);
    
}
