#include <iostream>
using namespace std;

int main() {
    string nama;
    int nim, alpro, pds, alin,nilai;
    cout << "Nama Mahasiswa: ";
    cin >> nama;
    cout << "NIM: ";
    cin >> nim;
    cout << "Nilai Algoritma dan Pemrograman: ";
    cin >> alpro;    
    cout << "Nilai Aljabar Linier: ";
    cin >> alin;
    cout << "Nilai Probabilitas dan Statistika: ";
    cin >> pds;

    if(alpro >= 60) {
        cout << "Algoritma dan Pemrograman: Lulus" << endl;
    }
    else {
        cout << "Algoritma dan Pemrograman: Tidak Lulus. Silahkan Ulangi di Tahun Depan!" << endl;
    }

    if(alin >= 60) {
        cout << "Aljabar Linier: Lulus" << endl;
    }
    else {
        cout << "Aljabar Linier: Tidak Lulus. Silahkan Ulangi di Tahun Depan!" << endl;
    }

    if(pds >= 60) {
        cout << "Probabilitas dan Statistika: Lulus" << endl;
    }
    else {
        cout << "Probabilitas dan Statistika: Tidak Lulus. Silahkan Ulangi di Tahun Depan!" << endl;
    }

    nilai = (alpro + alin + pds) / 3;
    cout << "Nilai Rata-rata Semester ini: " << nilai << endl;
    return 0;
}