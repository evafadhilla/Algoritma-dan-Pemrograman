/*
    Program Penjumlahan Dua Bilangan, Pengurangan Dua Bilangan dan Perkalian Dua Bilangan
    Program Menghitung Total dan Rata-Rata dari Element Array
    Nama     : Eva Fadhillah Ulia
    NIM      : A11.2022.14283
    Kelompok : A11.4207

*/

#include <iostream>

using namespace std;

int penjumlahan(int a, int b){
    int jumlah;
    jumlah = a+b;
    return(jumlah);
}

int pengurangan(int a, int b){
    int kurang;
    kurang = a-b;
    return(kurang);
}

int perkalian(int a, int b){
    int kali;
    kali = a*b;
    return(kali);
}

void inputArr(int j[], int k)       // mendefinisikan fungsi untuk proses input array
{
    for(int i=0; i<k; i++)
    {
        cout << "Masukkan indeks bilangan ke-["<<i<<"] = ";
        cin >> j[i];
    }
}

int jumlah(int j[], int k)         // mendefinisikan fungsi untuk menghitung jumlah dari semua elemen array
{
    int sum=0;
    for (int i=0; i<k; i++)         // menjumlahkan semua elemen array
    {
        sum +=j[i];
    }
    return sum;
}

float rata(int j[], int k)
{
    float sum=0;
    for (int i=0; i<k; i++)
    {
        sum +=j[i];
    }
    return sum/=k;
}


int main()
{
    //Kamus
    int a,b,sum;

    //Algoritma
    cout << "Program Kalkulator Sederhana" << endl;
    cout << "============================" << endl;
    cout << "\nMasukkan bilangan a : ";
    cin >> a;
    cout << "Masukkan bilangan b : ";
    cin >> b;
    cout << endl;
    cout << "========== Penjumlahan Dua Bilangan ==========" << endl;
    cout <<  a << " + " << b << " = " << penjumlahan(a,b) << endl;


    cout << "========== Pengurangan Dua Bilangan ==========" << endl;
    cout <<  a << " - " << b << " = " << pengurangan(a,b) << endl;


    cout << "==========  Perkalian Dua Bilangan  ==========" << endl;
    cout <<  a << " * " << b << " = " << perkalian(a,b) << endl;

    cout << endl;
    cout << "=====  Total dan Rata-Rata Elemen Array  ====" << endl;
    cout << endl;
    cout << "Masukkan jumlah elemen array   = ";
    cin >> sum;
    int j[sum];
    inputArr(j,sum);

    cout << "\nTotal Inputan Bilangan Array     = " << jumlah(j, sum) << endl;      // menampilkan hasil
    cout << "Rata-Rata Inputan Bilangan Array = " << rata(j,sum) << endl;
    return 0;
}


