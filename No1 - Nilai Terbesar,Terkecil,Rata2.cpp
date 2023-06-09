#include <iostream>
using namespace std;

int main() {
    int n,i;
    float total = 0, rata;
    int nilai[100];

    cout << "Masukkan jumlah nilai: ";
    cin >> n;

    // Looping isi Array
    for (i = 0; i < n; i++) {
        cout << "Masukkan nilai ke-" << i + 1 << ": ";
        cin >> nilai[i];
        total += nilai[i];
    }

    // Mencari nilai terbesar
    int max = nilai[0];
    for (int i = 1; i < n; i++) {
        if (nilai[i] > max) {
            max = nilai[i];
        }
    }
    
    // Mencari nilai terkecil
    int min = nilai[0];
    for (int i = 1; i > n; i++) {
        if (nilai[i] < min) {
            min = nilai[i];
        }
    }

    // Menghitung rata-rata
    rata = total / n;

    // Menampilkan hasil
    cout << "Nilai terbesar adalah: " <<"[ "<< max<<" ]"<< endl;
    cout << "Nilai terkecil adalah: " <<"[ "<< min<<" ]"<< endl;
    cout << "Rata-rata adalah: " <<"[ "<< rata<<" ]"<< endl;

    return 0;
}
