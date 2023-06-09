#include <iostream>
using namespace std;

class PersegiPanjang {
    private:
        int panjang;
        int lebar;

    public:
        void setPanjang(int p) {
            panjang = p;
        }
        void setLebar(int l) {
            lebar = l;
        }
        int getLuas() {
            return panjang * lebar;
        }
};

int main() {
    PersegiPanjang pp;
    pp.panjang(6);
    pp.lebar(3);

    cout<<"Luas: "<<pp.getLuas()<<endl;

    return 0;
}
