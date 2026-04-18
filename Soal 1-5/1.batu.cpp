#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Kode: ";
    cin >> n;
    if (n <= 0) {
        cout << "BUKAN" << endl;
        return 0;
    }
    while (n % 2 == 0) {
        n = n / 2;
    }
    if (n == 1) {
        cout << "YA" << endl;
    } 
    else {
        cout << "BUKAN" << endl;
    }
    return 0;
}