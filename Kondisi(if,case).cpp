/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int a;
    /*cout<<"Masukkan A: ";cin>>a;
    
    if(a<=70 && a>=90) {
        cout<<"Nilai Anda 'A' \n";
    }
    else
    if(a<=90 && a>=100) {
        cout<<"Nilai Anda 'A+' \n";
    }
    else
    if(a<70 && a>10) {
        cout<<"Nilai Anda 'B' \n";  
    }
    else{
    cout<<"Nilai Anda 'E' \n";
    }*/
    /*cin>>a;
    switch(a){
        case 1:
            cout<<"1 \n";
            break;
        case 2:
            cout<<"2 \n";
            break;
        default:
            cout<<"Error Masbro! \n"; 
    }*/
    cin>>a;
    switch(a){
        case 80 ... 90:
            cout<<"Nilai anda 'A' \n";
            break;
        case 60 ... 70:
            cout<<"Nilai anda 'B' \n";
            break;
        default:
            cout<<"Error Masbro! \n";
    }
    
    return 0;
}