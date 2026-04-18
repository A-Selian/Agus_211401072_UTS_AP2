#include <iostream>
using namespace std;

int main() {
    string judul;
    int i, hit; i = 0; hit = 0;
    cout << "Masukkan Daftar Judul Buku: ";
    getline(cin, judul);
    bool inJudul = false;
    while (i < judul.length()) {
        if (judul[i] != ' ') {
            if (!inJudul) {
                hit++;
                inJudul = true;
            }
        } 
        else {
            inJudul = false;
        }
        i++;
    }
    cout << "Jumlah Judul Buku: " << hit << endl;
    return 0;
}