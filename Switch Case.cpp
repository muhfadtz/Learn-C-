#include <iostream>

using namespace std;

int main() {
    char op;
    int a,b,hasil;

    cout<<"Masukkan operator (+ atau -): ";
    cin>>op;

    cout<<"Masukkan dua angka: "<<endl;
    cin>>a;
    cin>>b;

    switch (op) {
        case '+':
            hasil = a + b;
            break;
        case '-':
            hasil = a - b;
            break;
        default:
            cout<<"Operator yang dimasukkan salah"<<endl;
            return 0;
    }

    cout<<"Hasil: "<<hasil<<endl;

    return 0;
}
