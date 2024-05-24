#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  string nama;
  float nilaiKeaktifan, nilaiTugas, nilaiUjian, nilaiMurniKeaktifan, nilaiMurniTugas, nilaiMurniUjian, nilaiAkhir;

  // Input data
  cout << "PROGRAM HITUNG NILAI AKHIR" << endl;
  cout << "----------------------------" << endl;
  cout << "Nama Siswa : ";
  cin.ignore(); // Mengabaikan sisa inputan pada baris sebelumnya
  getline(cin, nama);
  cout << "Nilai Keaktifan : ";
  cin >> nilaiKeaktifan;
  cout << "Nilai Tugas : ";
  cin >> nilaiTugas;
  cout << "Nilai Ujian : ";
  cin >> nilaiUjian;

  // Menghitung nilai murni
  nilaiMurniKeaktifan = nilaiKeaktifan * 0.2;
  nilaiMurniTugas = nilaiTugas * 0.5;
  nilaiMurniUjian = nilaiUjian * 0.3;

  // Menghitung nilai akhir
  nilaiAkhir = nilaiMurniKeaktifan + nilaiMurniTugas + nilaiMurniUjian;

  // Menampilkan hasil
  cout << endl << "Siswa yang bernama " << nama << endl;
  cout << "Dengan Nilai Persentasi Yang dihasilkan." << endl;
  cout << "Nilai Keaktifan * 20% : " << nilaiMurniKeaktifan << endl;
  cout << "Nilai Tugas * 50% : " << nilaiMurniTugas << endl;
  cout << "Nilai Ujian * 30% : " << nilaiMurniUjian << endl;
  cout << "Jadi Siswa yang bernama " << nama << " memperoleh nilai akhir sebesar " << nilaiAkhir << endl;

  // Menahan tampilan hasil
  cout << "\nTekan enter untuk keluar...";
  cin.ignore(); // Mengabaikan sisa inputan pada baris sebelumnya
  getchar(); // Menunggu inputan karakter untuk keluar

  return 0;
}

