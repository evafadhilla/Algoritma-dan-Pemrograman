/*
    Nama     : Eva Fadhillah Ulia
    NIM      : A11.2022.14283
    Kelompok : A11.4207
*/

#include <iostream>

using namespace std;

struct sepeda{
    string merk;
    string type;
    int tahun;
    string harga;
};


int main()
{
    sepeda Spesification;
    Spesification.merk = "Polygon";
    Spesification.type = "Sepeda Gunung";
    Spesification.tahun = 2013;
    Spesification.harga = "2.000.000";

    sepeda *ptrSpesification = &Spesification;

    cout << "Merk  : " << ptrSpesification -> merk << endl;
    cout << "Type  : " << ptrSpesification -> type << endl;
    cout << "Tahun : " << ptrSpesification -> tahun << endl;
    cout << "Harga : " << ptrSpesification -> harga << endl;

    return 0;
}
