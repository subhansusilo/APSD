#include <iostream>

using namespace std;

// Fungsi untuk menghitung penjumlahan deret bilangan genap
int penjumlahanDeret(int n) {
    int total = 0;
    for (int i = 2; i <= n; i += 2) {
        total += i;
    }
    return total;
}

// Fungsi untuk mencetak segitiga siku
void segitigaSiku(int n) {
    for (int i = 2; i <= n; i += 2) {
        for (int j = 2; j <= i; j += 2) {
            cout << j;
            if (j < i) {
                cout << " + ";
            }
        }
        cout << " = " << penjumlahanDeret(i) << endl;
    }
}

int main() {
    int n = 5; // Jumlah baris segitiga siku
    segitigaSiku(n);
    return 0;
}