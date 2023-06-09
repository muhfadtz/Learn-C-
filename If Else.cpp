#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main()
{
    string P="Genap";
    string Q="Ganjil";
    
    for(int i=0; i<10; i++){
        if(i%2 == 0){
        cout<<i<<" Adalah Angka "<<P<<endl;
        }
        else 
        if(i%2 == 1) {
        cout<<i<<" Adalah Angka "<<Q<<endl;    
        }     
        
    }
    
    return 0;
}