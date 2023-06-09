#include <iostream.h>


using namespace std;
 int main() {
    int ts,tp,as;
    float volume;
    
    cout<<"Masukkan alas segitiga: "; cin>>as;
    cout<<"Masukkan tinggi segitiga: "; cin>>ts;
    cout<<"Masukkan tinggi prisma: "; cin>>tp;
    
    volume=as*ts*tp/2;

    cout<<"Volume Prisma Adalah: "<<volume;
    return 0;
 }