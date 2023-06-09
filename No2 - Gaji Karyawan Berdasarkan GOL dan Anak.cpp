#include <iostream.h>
 
using namespace std;
 
int main()
{
  int gol,anak,gaji;
  float potongan;

  cout<<"Masukkan Golongan Anda: "; cin>>gol;
  if (gol == 1) {
    gol = 5000000;
  }
  else
  if (gol == 2) {
    gol = 3000000;
  }
  else
  if (gol == 1) {
    gol = 2500000;
  }
  
  cout<<"Masukkan Jumlah Anak: "; cin>>anak;
  if (anak == 1 or anak == 2) {
      anak = 500000;
  }
  else
  if (anak>2) {
      anak = 750000;
  }
 
 potongan = (gol+anak)*0.05;
 gaji = gol + anak - potongan;
 cout<<"Gaji Anda: "<<gaji<<endl;
  
  
  return 0;
}