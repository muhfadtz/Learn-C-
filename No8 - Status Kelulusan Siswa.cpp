  #include <iostream.h>
 
using namespace std;
 
int main()
{
  int uts,uas,harian,kehadiran,nilai;

  cout<<"Masukkan Nilai UTS: "; cin>>uts;
  cout<<"Masukkan Nilai UAS: "; cin>>uas;
  cout<<"Masukkan Nilai Harian: "; cin>>harian;
  cout<<"Masukkan Nilai Kehadiran: "; cin>>kehadiran;
  
  nilai = 0.3*uts+0.3*uas+0.4*harian;
  cout<<"Nilai Akhir : "<<nilai<<endl;
  
  if (nilai>=60 and kehadiran>=12) {
      cout<<"Anda Dinyatakan LULUS!";
  }
  else
  if (nilai<=60 and kehadiran<=12) {
      cout<<"Anda Dinyatakan TIDAK LULUS!";
  }
  
  return 0;
}