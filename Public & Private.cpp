#include <iostream>
#include <string.h>
using namespace std;

class buku {
    private:
        char judul[20];
        char pengarang[20];
        int jumlah;

    public:
        void inisialisasi(char *Judul, char *Pengarang, int Jumlah) {
            strcpy(judul, Judul);
            strcpy(pengarang, Pengarang);
            jumlah = Jumlah;
        }

        void info() {
            cout << "Judul      : " << judul << endl;
            cout << "Pengarang  : " << pengarang << endl;
            cout << "Jumlah     : " << jumlah << endl;
        }
};

int main(){
    
    buku novel;
    novel.inisialisasi("Ramayana", "Narayan", 12);
    novel.info();

return 0;
}