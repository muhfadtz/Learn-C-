#include <iostream>
using namespace std;

struct Alamat {
    string jalan;
    string kota;
    string provinsi;
};

struct Mahasiswa {
    string nama;
    int umur;
    string jurusan;
    Alamat alamat;
};

int main() {
    Mahasiswa mhs;
    mhs.nama = "Muhammad Fadhlan Tanjung";
    mhs.umur = 18;
    mhs.jurusan = "Ilmu Komputer";
    mhs.alamat.jalan = "Jalan Mandala By pass";
    mhs.alamat.kota = "Medan";
    mhs.alamat.provinsi = "Sumatera Utara";

    cout << "Nama: " << mhs.nama << endl;
    cout << "Umur: " << mhs.umur << endl;
    cout << "Jurusan: " << mhs.jurusan << endl;
    cout << "Alamat: " << mhs.alamat.jalan << ", " << mhs.alamat.kota << ", " << mhs.alamat.provinsi << endl;

    return 0;
}
