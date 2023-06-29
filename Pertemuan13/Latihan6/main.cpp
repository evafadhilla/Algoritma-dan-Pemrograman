/*
    Nama     : Eva Fadhillah Ulia
    NIM      : A11.2022.14283
    Kelompok : A11.4207
*/

#include <iostream>

using namespace std;

enum musim {dingin,semi,panas,gugur,hujan,kemarau};

int main() {
    musim sekarang = kemarau;

    if (sekarang == dingin) {
        cout << "Saat ini adalah musim dingin." << endl;
    } else if (sekarang == semi) {
        cout << "Saat ini adalah musim semi." << endl;
    } else if (sekarang == panas) {
        cout << "Saat ini adalah musim panas." << endl;
    } else if (sekarang == gugur) {
        cout << "Saat ini adalah musim gugur." << endl;
    } else if (sekarang == hujan) {
        cout << "Saat ini adalah musim hujan." << endl;
    } else if (sekarang == kemarau) {
        cout << "Saat ini adalah musim kemarau." << endl;
    } else {
        cout << "Tidak ada musim yang terdefinisi." << endl;
    }

    return 0;
}
