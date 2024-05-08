#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  int n = 10; // Jumlah deret bilangan ganjil
  int sum = 0; // Penjumlahan deret bilangan ganjil

  // Perulangan untuk menjumlahkan bilangan ganjil
  for (int i = 1; i <= n; i++) {
    int ganjil = 2 * i - 1; // Menghitung bilangan ganjil ke-i
    cout << ganjil << " "; // Menampilkan bilangan ganjil
    sum += ganjil; // Menambahkan bilangan ganjil ke total
  }

  cout << "\nHasil penjumlahan: " << sum << endl; // Menampilkan total penjumlahan

  return 0;
}
