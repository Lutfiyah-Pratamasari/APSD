#include <iostream>
#include <string>

using namespace std;

int main() {
  // Deklarasi variabel
  string namaKaryawan;
  string golonganJabatan;
  string pendidikan;
  int jumlahJamKerja;
  float gajiPokok = 300000;
  float tunjanganJabatan, tunjanganPendidikan, honorLembur, gajiTotal;

  // Input data karyawan
  cout << "PROGRAM HITUNG GAJI KARYAWAN KONTRAK" << endl;
  cout << "------------------------------------" << endl;
  cout << "Nama Karyawan : ";
  getline(cin, namaKaryawan);
  cout << "Golongan Jabatan : ";
  getline(cin, golonganJabatan);
  cout << "Pendidikan : ";
  getline(cin, pendidikan);
  cout << "Jumlah Jam Kerja : ";
  cin >> jumlahJamKerja;

  // Hitung tunjangan jabatan
  if (golonganJabatan == "1") {
    tunjanganJabatan = 0.05 * gajiPokok;
  } else if (golonganJabatan == "2") {
    tunjanganJabatan = 0.10 * gajiPokok;
  } else if (golonganJabatan == "3") {
    tunjanganJabatan = 0.15 * gajiPokok;
  } else {
    tunjanganJabatan = 0;
    cout << "Golongan jabatan tidak valid." << endl;
  }

  // Hitung tunjangan pendidikan
  if (pendidikan == "SMA") {
    tunjanganPendidikan = 0.025 * gajiPokok;
  } else if (pendidikan == "D1") {
    tunjanganPendidikan = 0.05 * gajiPokok;
  } else if (pendidikan == "D3") {
    tunjanganPendidikan = 0.20 * gajiPokok;
  } else if (pendidikan == "S1") {
    tunjanganPendidikan = 0.30 * gajiPokok;
  } else {
    tunjanganPendidikan = 0;
    cout << "Pendidikan tidak valid." << endl;
  }

  // Hitung honor lembur
  if (jumlahJamKerja > 8) {
    honorLembur = (jumlahJamKerja - 8) * 3500;
  } else {
    honorLembur = 0;
  }

  // Hitung gaji total
  gajiTotal = gajiPokok + tunjanganJabatan + tunjanganPendidikan + honorLembur;

  // Tampilkan hasil
  cout << endl << "Siswa yang bernama " << namaKaryawan << endl;
  cout << "Honor yang diterima:" << endl;
  cout << "- Gaji Pokok    : Rp " << gajiPokok << endl;
  cout << "- Tunjangan Jabatan : Rp " << tunjanganJabatan << endl;
  cout << "- Tunjangan Pendidikan : Rp " << tunjanganPendidikan << endl;
  cout << "- Honor Lembur    : Rp " << honorLembur << endl;
  cout << "+----------------+" << endl;
  cout << "= Gaji Total      : Rp " << gajiTotal << endl;

  return 0;
}



