#include <iostream>
using namespace std;

int main() {
    string mantra;
    int i, hit;
    i = 0; hit = 0;
    cout << "Masukkan Mantra: ";
    cin >> mantra;

    while (i < mantra.length()) {
        char c = tolower(mantra[i]);
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {
            hit++;
        }
        i++;
    }
    if (hit == 0) {
        cout << "Mantra Tidak Valid! Tidak memiliki Kekuatan!" << endl;
        return 0;
    }
    else {
        cout << "Kekuatan Mantra: " << hit << endl;
    }
    return 0;
}