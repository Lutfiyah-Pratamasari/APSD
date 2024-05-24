#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  string nim, nama;
  float nilaiTugas1, nilaiTugas2, nilaiTugas3, nilaiRataRata;

  // Input data
  cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;
  cout << "------------------------------" << endl;
  cout << "Nim Siswa : ";
  cin >> nim;
  cout << "Nama Siswa : ";
  cin.ignore(); // Mengabaikan sisa inputan pada baris sebelumnya
  getline(cin, nama); // Membaca inputan nama lengkap
  cout << "Nilai Tugas I : ";
  cin >> nilaiTugas1;
  cout << "Nilai Tugas II : ";
  cin >> nilaiTugas2;
  cout << "Nilai Tugas III : ";
  cin >> nilaiTugas3;

  // Menghitung nilai rata-rata
  nilaiRataRata = (nilaiTugas1 + nilaiTugas2 + nilaiTugas3) / 3;

  // Menampilkan hasil
  cout << endl << "Nim " << nim << " Siswa yang bernama " << nama << endl;
  cout << "Memperoleh nilai rata-rata " << nilaiRataRata << " dari hasil tugas yang diikutinya." << endl;

  // Menahan tampilan hasil
  cout << "\nTekan enter untuk keluar...";
  cin.ignore(); // Mengabaikan sisa inputan pada baris sebelumnya
  getchar(); // Menunggu inputan karakter untuk keluar

  return 0;
}

