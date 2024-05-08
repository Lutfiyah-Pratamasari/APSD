#include <iostream>
#include <string>

using namespace std;

int main() {
  // Deklarasi variabel
  string namaSiswa;
  float nilaiKeaktifan, nilaiTugas, nilaiUjian, nilaiMurniKeaktifan, nilaiMurniTugas, nilaiMurniUjian, nilaiAkhir;
  char grade;

  // Input data siswa
  cout << "PROGRAM HITUNG NILAI AKHIR" << endl;
  cout << "---------------------------" << endl;
  cout << "Nama Siswa     : ";
  getline(cin, namaSiswa);
  cout << "Nilai Keaktifan : ";
  cin >> nilaiKeaktifan;
  cout << "Nilai Tugas     : ";
  cin >> nilaiTugas;
  cout << "Nilai Ujian     : ";
  cin >> nilaiUjian;

  // Hitung nilai murni
  nilaiMurniKeaktifan = nilaiKeaktifan * 0.20;
  nilaiMurniTugas = nilaiTugas * 0.30;
  nilaiMurniUjian = nilaiUjian * 0.50;

  // Hitung nilai akhir
  nilaiAkhir = nilaiMurniKeaktifan + nilaiMurniTugas + nilaiMurniUjian;

  // Menentukan grade
  if (nilaiAkhir >= 80) {
    grade = 'A';
  } else if (nilaiAkhir >= 70) {
    grade = 'B';
  } else if (nilaiAkhir >= 56) {
    grade = 'C';
  } else if (nilaiAkhir >= 46) {
    grade = 'D';
  } else {
    grade = 'E';
  }

  // Tampilkan hasil
  cout << endl << "Siswa yang bernama " << namaSiswa << endl;
  cout << "Dengan Nilai Persentasi Yang dihasilkan:" << endl;
  cout << "- Nilai Keaktifan * 20% : " << nilaiMurniKeaktifan << endl;
  cout << "- Nilai Tugas * 30% : " << nilaiMurniTugas << endl;
  cout << "- Nilai Ujian * 50% : " << nilaiMurniUjian << endl;
  cout << "Jadi Siswa yang bernama " << namaSiswa << " memperoleh nilai akhir sebesar " << nilaiAkhir << " dengan grade " << grade << endl;

  return 0;
}

