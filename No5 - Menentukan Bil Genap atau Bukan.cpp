  #include <iostream.h>
 
using namespace std;
 
int main()
{
  int a;
 
  cout << "Masukkan Sebuah Bilangan: "; cin >> a;
  
  if (a % 2 == 0) {
    cout << a << " Adalah Bilangan Genap";
  }
  else {
     if (a % 2 == 1) {
    cout << a << " Bukan Bilangan Genap"<<endl;
  }
  }
 
  return 0;
}