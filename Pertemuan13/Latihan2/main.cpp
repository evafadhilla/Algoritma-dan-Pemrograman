/*
    Nama     : Eva Fadhillah Ulia
    NIM      : A11.2022.14283
    Kelompok : A11.4207

*/

#include <iostream>
#include <string>

using namespace std;

struct sepeda{
    string merk;
    string type;
    int tahun;
    string harga;
};

int main()
{
    sepeda spesification;
    spesification.merk = "Polygon";
    spesification.type = "Sepeda Gunung";
    spesification.tahun = 2013;
    spesification.harga = "2.000.000";

    cout << "Merk  : " << spesification.merk << endl;
    cout << "Type  : " << spesification.type << endl;
    cout << "Tahun : " << spesification.tahun << endl;
    cout << "Harga : " << spesification.harga << endl;
    return 0;
}
