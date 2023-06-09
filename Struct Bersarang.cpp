#include <iostream>
using namespace std;

struct data_tanggal
{
    int tahun;
    int bulan;
    int tanggal;
};

struct data_pegawai
{
    int nip;
    char nama[25];
    data_tanggal lahir;
};

int main()
{
    data_pegawai karyawan;
    karyawan.lahir.tahun = 1983;
    karyawan.lahir.bulan = 7;
    karyawan.lahir.tanggal = 23;
    cin >> karyawan.nama; 
    cin >> karyawan.nip;
    system("CLS");
    cout << karyawan.nama << endl;
    cout << karyawan.nip << endl;

    cout << karyawan.lahir.tahun << karyawan.lahir.bulan << karyawan.lahir.tanggal;
    cout<<endl;
};