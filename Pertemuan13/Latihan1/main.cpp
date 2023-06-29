/*
    Nama     : Eva Fadhillah Ulia
    NIM      : A11.2022.14283
    Kelompok : A11.4207

*/


#include <iostream>
#include <cmath>

using namespace std;

struct Hitung {
    int p;
    int l;
    int r;
    int t;
    float luas;
    float volume;
};

int main()
{
    Hitung LuasPersegiPanjang;
    cout << "====== Persegi Panjang ======" << endl;
    cout << "Masukkan nilai p : ";
    cin  >> LuasPersegiPanjang.p;
    cout << "Masukkan nilai l : ";
    cin  >> LuasPersegiPanjang.l;
    LuasPersegiPanjang.luas = LuasPersegiPanjang.p * LuasPersegiPanjang.l;
    cout << "Luas Persegi Panjang : " << LuasPersegiPanjang.p << " x " << LuasPersegiPanjang.l << " : " << LuasPersegiPanjang.luas << endl;

    cout << endl;
    Hitung LuasLingkaran;
    cout << "========= Lingkaran ==========" << endl;
    cout << "Masukkan nilai r : ";
    cin  >> LuasLingkaran.r;
    LuasLingkaran.luas = 3.14 * LuasLingkaran.r * LuasLingkaran.r;
    cout << "Luas Lingkaran   : " << 3.14 << " x " << LuasLingkaran.r << " x " << LuasLingkaran.r << " : " << LuasLingkaran.luas << endl;

    cout << endl;
    Hitung VolumeKerucut;
    cout << "========== Kerucut ==========" << endl;
    cout << "Masukkan nilai r : ";
    cin  >> VolumeKerucut.r;
    cout << "Masukkan nilai t : ";
    cin  >> VolumeKerucut.t;
    VolumeKerucut.volume = (1.0 / 3.0) * 3.14 * VolumeKerucut.r * VolumeKerucut.r * VolumeKerucut.t;
    cout << "Volume Kerucut   : " << (1.0 / 3.0) << " x " << 3.14 << " x " <<  VolumeKerucut.r
         << " x " << VolumeKerucut.r << " x " << VolumeKerucut.t << " : " << VolumeKerucut.volume << endl;

    cout << endl;
    Hitung VolumeBola;
    cout << "============ Bola ============" << endl;
    cout << "Masukkan nilai r : ";
    cin  >> VolumeBola.r;
    VolumeBola.volume = (4.0/3.0) * 3.14 * VolumeBola.r * VolumeBola.r * VolumeBola.r;   // pow(VolumeBola.r, 3) => cara singkat menggunakan fungsi pow yg terdapat dalam library <cmath> yg digunakan untuk menghitung pangkat
    cout << "Volume Bola      : " << (4.0/3.0) << " x " << 3.14 << " x " << VolumeBola.r << " x "
         << VolumeBola.r << " x " <<  VolumeBola.r << " : " << VolumeBola.volume << endl;

    return 0;

}
