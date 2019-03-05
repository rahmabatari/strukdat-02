/*
 Nama       : Rahma Batari
 NPM        : 140810180051
 Kelas      : A
 Tanggal    : 5 Maret 2019
*/

#include <iostream>
using namespace std;

void moveZeroToEnd(int arr[], int n){
    int count = 0;
    for (int i=0; i<n; i++)
        if (arr[i]!=0)
            swap (arr[count++], arr[i] );
}
void input (int (&arr)[100], int& n){
    cout<<"Masukan panjang data: " ;
    cin>> n;
    cout<<"Masukan data : ";
    cin>> arr[100];
}

void output(int arr[], int n){
    for ( int i=0; i<n; i++)
        cout<< arr[i]<< " ";
}

int main(){
    int arr[100];
    int n;
    input (arr, n);
    moveZeroToEnd(arr, n);
    output(arr, n);
}
