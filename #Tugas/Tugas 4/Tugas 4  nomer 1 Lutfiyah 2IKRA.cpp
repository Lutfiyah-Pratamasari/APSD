#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  int n = 10; // Jumlah deret bilangan genap
  int sum = 0; // Penjumlahan deret bilangan genap

  // Perulangan untuk menjumlahkan bilangan genap
  for (int i = 1; i <= n; i++) {
    int genap = 2 * i; // Menghitung bilangan genap ke-i
    cout << genap << " "; // Menampilkan bilangan genap
    sum += genap; // Menambahkan bilangan genap ke total
  }

  cout << "\nHasil penjumlahan: " << sum << endl; // Menampilkan total penjumlahan

  return 0;
}

