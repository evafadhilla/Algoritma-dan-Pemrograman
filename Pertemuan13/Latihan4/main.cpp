/*
    Nama     : Eva Fadhillah Ulia
    NIM      : A11.2022.14283
    Kelompok : A11.4207
*/

#include <iostream>
#include <vector>

using namespace std;

struct mahasiswa {
    string nim;
    string nama;
    string jurusan;
    int tahunLulus;
};

int main() {
    const int jumlahMhs = 4;
    mahasiswa data[jumlahMhs];

    // Mengisi data secara statis
    data[0].nim = "A11.2020.01234";
    data[0].nama = "Andi";
    data[0].jurusan = "Broadcasting";
    data[0].tahunLulus = 2023;

    data[1].nim = "A11.2010.01234";
    data[1].nama = "Budi";
    data[1].jurusan = "Sistem Informasi";
    data[1].tahunLulus = 2013;

    data[2].nim = "A11.2000.01234";
    data[2].nama = "Ali";
    data[2].jurusan = "DKV";
    data[2].tahunLulus = 2003;

    data[3].nim = "A11.1990.01234";
    data[3].nama = "Siti";
    data[3].jurusan = "Kesehatan";
    data[3].tahunLulus = 1993;

    // Menampilkan data secara statis
    cout << "====================  DATA MAHASISWA SECARA STATIS  ======================" << endl;
    for (int i = 0; i < jumlahMhs; i++) {
        cout << "NIM         : " << data[i].nim << endl;
        cout << "Nama        : " << data[i].nama << endl;
        cout << "Jurusan     : " << data[i].jurusan << endl;
        cout << "Tahun Lulus : " << data[i].tahunLulus << endl;
        cout << endl;
    }

    // Mengisi data secara dinamis
    int jumlahMhsDinamis;
    cout << "Masukkan jumlah mahasiswa : ";
    cin >> jumlahMhsDinamis;
    cout << endl;

    vector<mahasiswa> dataDinamis(jumlahMhsDinamis);  //vektor yang dapat menyimpan objek mahasiswa secara dinamis.

    for (int i = 0; i < jumlahMhsDinamis; i++) {
        cout << "Data Mahasiswa ke-" << i + 1 << endl;
        cout << "NIM : ";
        cin  >> dataDinamis[i].nim;
        cout << "Nama : ";
        cin  >> dataDinamis[i].nama;
        cout << "Jurusan : ";
        cin  >> dataDinamis[i].jurusan;
        cout << "Tahun Lulus : ";
        cin  >> dataDinamis[i].tahunLulus;
        cout << endl;
    }

    // Menampilkan data secara dinamis
    cout << "====================  DATA MAHASISWA SECARA DINAMIS  ======================" << endl;
    for (int i = 0; i < dataDinamis.size(); i++) {
        const auto& mhs = dataDinamis[i];   //membuat referensi konstan ke elemen vektor mhs pada indeks i
        cout << "NIM         : " << mhs.nim << endl;
        cout << "Nama        : " << mhs.nama << endl;
        cout << "Jurusan     : " << mhs.jurusan << endl;
        cout << "Tahun Lulus : " << mhs.tahunLulus << endl;
        cout << endl;
    }

    return 0;
}
