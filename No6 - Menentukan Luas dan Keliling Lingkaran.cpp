#include <iostream.h>
 
using namespace std;
 
int main()
{
  float r,luas,keliling;
  const float phi = 3.14;
  
/*Luas Lingkaran*/

  cout<<"Masukkan Jari-jari Lingkaran: "; cin>>r;
  luas = r*r*phi;
  cout<<"Luas Lingkaran Adalah: "<<luas<<endl;
  
/*Keliling Lingkaran*/
  
  keliling = 2*phi*r;
  cout<<"Keliling Lingkaran Adalah: "<<keliling<<endl;
  
 
  return 0;
}