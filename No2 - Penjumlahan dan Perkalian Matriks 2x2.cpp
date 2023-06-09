#include <iostream>

using namespace std;

int main()
{
    int matrix1[2][2] = {{2, 3}, {4, 5}}, matrix2[2][2] = {{5, 6}, {7, 8}}, hasil[2][2];
    int i, j;

    // Penjumlahan matriks
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            hasil[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Output hasil penjumlahan matriks
    cout << "Hasil penjumlahan matriks:\n";
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << hasil[i][j] << "\t";
        }
        cout << endl;
    }

    // Perkalian matriks
    hasil[0][0] = (matrix1[0][0]*matrix2[0][0]) + (matrix1[0][1]*matrix2[1][0]);
    hasil[0][1] = (matrix1[0][0]*matrix2[0][1]) + (matrix1[0][1]*matrix2[1][1]);
    hasil[1][0] = (matrix1[1][0]*matrix2[0][0]) + (matrix1[1][1]*matrix2[1][0]);
    hasil[1][1] = (matrix1[1][0]*matrix2[0][1]) + (matrix1[1][1]*matrix2[1][1]);

    // Output hasil perkalian matriks
    cout << "Hasil perkalian matriks:\n";
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << hasil[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
