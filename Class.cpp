#include <iostream>
#include <string.h>

using namespace std;
class buku {
    public:
    char judul[20];
    char pengarang[20];
    int jumlah;
};

int main() {

    buku novel;
    
    strcpy(novel.judul,"Ramayana");
    strcpy(novel.pengarang,"Narayan");
    novel.jumlah = 12;
    
    cout<<novel.judul<<endl;
    cout<<novel.pengarang<<endl;
    cout<<novel.jumlah<<endl;
    
    return 0;
}