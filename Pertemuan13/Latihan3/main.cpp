/*
    Nama     : Eva Fadhillah Ulia
    NIM      : A11.2022.14283
    Kelompok : A11.4207

*/

#include <iostream>

using namespace std;

struct hitung {
    int p;
    int l;
    int r;
    int t;
    float luas;
    float volume;
};

typedef struct hitung rumus;

int main()
{
    rumus PersegiPanjang;
    rumus Lingkaran;
    rumus Kerucut;
    rumus Bola;

    cout << "======= Persegi Panjang  ======" << endl;
    cout << "Masukkan nilai p : ";
    cin >> PersegiPanjang.p;
    cout << "Masukkan nilai l : ";
    cin >> PersegiPanjang.l;
    PersegiPanjang.luas = PersegiPanjang.p * PersegiPanjang.l;
    cout << "Luas Persegi Panjang : " << PersegiPanjang.p << " x " << PersegiPanjang.l << " : " << PersegiPanjang.luas << endl;

    cout << endl;
    cout << "======= Lingkaran  ======" << endl;
    cout << "Masukkan nilai r : ";
    cin  >> Lingkaran.r;
    Lingkaran.luas = 3.14 * Lingkaran.r * Lingkaran.r;
    cout << "Luas Lingkaran   : " << 3.14 << " x " << Lingkaran.r << " x " << Lingkaran.r << " : " << Lingkaran.luas << endl;

    cout << endl;
    cout << "======= Kerucut =======" << endl;
    cout << "Masukkan nilai r : ";
    cin  >> Kerucut.r;
    cout << "Masukkan nilai t : ";
    cin  >> Kerucut.t;
    Kerucut.volume = (1.0 / 3.0) * 3.14 * Kerucut.r * Kerucut.r * Kerucut.t;
    cout << "Volume Kerucut   : " << (1.0 / 3.0) << " x " << 3.14 << " x " <<  Kerucut.r
         << " x " << Kerucut.r << " x " << Kerucut.t << " : " << Kerucut.volume << endl;

    cout << endl;
    cout << "======= Bola =======" << endl;
    cout << "Masukkan nilai r : ";
    cin  >> Bola.r;
    Bola.volume = (4.0 / 3.0) * 3.14 * Bola.r * Bola.r * Bola.r;
    cout << "Volume Bola      : " << (4.0/3.0) << " x " << 3.14 << " x " << Bola.r << " x "
         << Bola.r << " x " <<  Bola.r << " : " << Bola.volume << endl;

    return 0;
}
