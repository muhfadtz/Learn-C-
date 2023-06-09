
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
int a;
string nama;
    
    cout<<"Masukkan Nama Kamu: ";
    getline(cin,nama);
    cout<<"Masukkan Umur Kamu: ";
    cin>>a;
    
    cout<<"Nama Kamu "<<nama<<" Umur Kamu "<<a;

    return 0;
}