#include <iostream.h>
 
using namespace std;
 
int main()
{
  int i,n;

  cout<<"Masukkan n: "; cin>>n;
  for (i = 1;i<=n;i++) {
    if (i % 2 == 1){
        cout<<i<<endl;
    }
  }
  
  return 0;
}