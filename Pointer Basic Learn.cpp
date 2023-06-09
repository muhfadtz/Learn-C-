#include <iostream>

using namespace std;

int main()
{
    int A = 20;
    int *Aptr = &A;
    
    cout<<"Ini adalah nilai: "<<A<<endl;    //Nilai = (* + nama_variabel)
    cout<<"Ini adalah nilai: "<<*Aptr<<endl;    //Nilai = (* + nama_variabel_pointer)
    cout<<"Ini adalah alamat nilai: "<<&A<<endl;    //Alamat = (& + nama_variabel)
    cout<<"Ini adalah alamat nilai: "<<Aptr<<endl;    //Alamat = (nama_variabel_pointer)
    
    *Aptr = 40;
    cout<<"Ini adalah nilai: "<<A<<endl;

    return 0;
}