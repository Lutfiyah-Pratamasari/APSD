#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  string namaSiswa;
  float nilaiPertandingan1, nilaiPertandingan2, nilaiPertandingan3, nilaiRataRata;
  int juara;

  // Input data siswa
  cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;
  cout << "------------------------------" << endl;
  cout << "Nama Siswa     : ";
  getline(cin, namaSiswa);
  cout << "Nilai Pertandingan I : ";
  cin >> nilaiPertandingan1;
  cout << "Nilai Pertandingan II : ";
  cin >> nilaiPertandingan2;
  cout << "Nilai Pertandingan III : ";
  cin >> nilaiPertandingan3;

  // Hitung nilai rata-rata
  nilaiRataRata = (nilaiPertandingan1 + nilaiPertandingan2 + nilaiPertandingan3) / 3;

  // Menentukan juara
  if (nilaiRataRata >= 80) {
    juara = 1;
  } else if (nilaiRataRata >= 75) {
    juara = 2;
  } else if (nilaiRataRata >= 65) {
    juara = 3;
  } else {
    juara = 0;
  }

  // Tampilkan hasil
  cout << endl << "Siswa yang bernama " << namaSiswa << endl;
  cout << "Memperoleh nilai rata-rata " << nilaiRataRata << " dan menjadi juara ke-" << juara << " dari hasil perlombaan yang diikutinya." << endl;

  return 0;
}

