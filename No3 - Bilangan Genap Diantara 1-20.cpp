#include <iostream.h>
 
using namespace std;
 
int main()
{
  int i;

  cout<<"Bilangan Genap 1-20 Adalah: "<<endl;
  for (i = 1;i<=20;i++) {
    if (i % 2 == 0){
        cout<<i<<endl;
    }
  }
  
  return 0;
}