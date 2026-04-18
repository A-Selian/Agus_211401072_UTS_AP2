#include <iostream>
using namespace std;

int main() {
    string m;
    int dec = 0;
    cout << "Input Kode Biner: ";
    cin >> m;
    for(char c : m) {
        if(c != '0' && c != '1') {
            cout << "Pesan Rusak" << endl;
            return 0;
        }
    }
    for (char c : m) {
        dec = dec * 2 + (c - '0');
    }
    cout << "Angka desimal dari biner" << m << " adalah = " << dec << endl;
    return 0;
}