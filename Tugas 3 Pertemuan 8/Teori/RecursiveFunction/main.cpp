/*
    Tugas Teori Recursive Function (Fungsi Rekursif)
    Nama     : Eva Fadhillah Ulia
    NIM      : A11.2022.14283
    Kelompok : A11.4207

*/


#include <iostream>
using namespace std;

int penjumlahan(int a, int b)
{
    if(b == 0)
        return a;
    else
        return penjumlahan(a+1, b-1);
}

int pengurangan(int a, int b)
{
    if(b == 0)
        return a;
    else
        return pengurangan(a-1, b-1);
}

int perkalian(int a, int b)
{
    if(b == 0)
        return 0;
    else
        return a + perkalian(a, b-1);
}

int pangkat(int a, int b)
{
    if(b == 0)
        return 1;
    else
        return a*pangkat(a, b-1);
}

int pembagian(int a, int b)
{
    if(a<b)
        return 0;
    else
        return 1+pembagian(a-b, b);
}

int fibonacci(int n)
{
    if(n <= 1)
        return n;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}

int faktorial(int n)
{
    if(n == 0 || n == 1)
        return 1;
    else
        return n*faktorial(n-1);
}

int main()
{
    int a, b;
    cout << "Masukkan dua angka : ";
    cin >> a >> b;

    cout << "Penjumlahan     : " << penjumlahan(a, b) << endl;
    cout << "Pengurangan     : " << pengurangan(a, b) << endl;
    cout << "Perkalian       : " << perkalian(a, b) << endl;
    cout << "Pangkat         : " << pangkat(a, b) << endl;

    if(b != 0)
        cout << "Pembagian       : " << pembagian(a, b) << endl;
    else
        cout << "Pembagian dengan nol tidak terdefinisi." << endl;

    cout << "Deret Fibonacci : ";
    for (int i = 0; i < a; i++)
    {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    cout << "Faktorial       : " << faktorial(a) << endl;

    return 0;
}
