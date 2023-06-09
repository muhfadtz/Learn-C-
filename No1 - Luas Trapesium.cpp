#include <iostream.h>

using namespace std;

int main() {
int sisiatas, sisibawah, tinggi;
float luas;

    cout<<"Masukkan panjang  sisi atas: "; cin>>sisiatas;
    cout<<"Masukkan panjang sisi bawah: "; cin>>sisibawah;
    cout<<"Masukkan tinggi trapesium: "; cin>>tinggi;
    
    luas=(sisiatas+sisibawah)*tinggi/2;
    
    cout<<"Luas Trapesium Adalah : "<<luas; 

    return 0;
}