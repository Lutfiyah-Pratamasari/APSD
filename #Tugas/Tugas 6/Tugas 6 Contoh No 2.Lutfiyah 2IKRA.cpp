#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Masukkan banyak data: ";
    cin >> n;

    string nama[n];
    int jamKerja[n];
    int honorLembur[n];
    int totalHonor[n];

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << i + 1 << endl;
        cout << "Nama Pegawai: ";
        cin.ignore();
        getline(cin, nama[i]);
        cout << "Jam Kerja: ";
        cin >> jamKerja[i];

        if (jamKerja[i] > 8) {
            honorLembur[i] = (jamKerja[i] - 8) * 5000;
            totalHonor[i] = 15000 + honorLembur[i];
        } else {
            honorLembur[i] = 0;
            totalHonor[i] = 15000;
        }
    }

    cout << "\n| No | Nama Pegawai | Jam Kerja | Honor Lembur | Total Honor |" << endl;
    cout << "|----|--------------|-----------|--------------|-------------|" << endl;
    
    cout << "\n| 1  |   Suratmin   |     8     |     15000    |   15000     | " << endl;
    
    cout << "\n| 2  |   Sutarr     |     9     |     16500    |   31500     | " << endl;

    for (int i = 0; i < n; i++) {
        cout << "|" << setw(3) << i + 1 << " |" << setw(13) << nama[i] << " |" << setw(10) << jamKerja[i] << " |" << setw(13) << honorLembur[i] << " |" << setw(12) << totalHonor[i] << " |" << endl;
    }

    return 0;
}

