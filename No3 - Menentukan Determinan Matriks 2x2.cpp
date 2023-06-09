#include <iostream>

using namespace std;

int main()
{
    int matrix1[2][2] = {{2, 3}, {4, 5}}, matrix2[2][2] = {{5, 6}, {7, 8}}, determinant1, determinant2;

    // Hitung determinan matriks
    determinant1 = (matrix1[0][0] * matrix1[1][1]) - (matrix1[0][1] * matrix1[1][0]);
    determinant2 = (matrix2[0][0] * matrix2[1][1]) - (matrix2[0][1] * matrix2[1][0]);
    
    // Cetak hasil determinan matriks
    cout << "Determinan matriks 1 adalah: " << determinant1 << endl;
    cout << "Determinan matriks 2 adalah: " << determinant2 << endl;

    return 0;
}
