/*
    Nama     : Eva Fadhillah Ulia
    NIM      : A11.2022.14283
    Kelompok : A11.4207

    Soal No. 1
    Buatlah sebuah sebuah program yang mengimplementasikan sebuah prosedur yang dapat
    mencetak nilai genap terkecil di dalam suatu deret bilangan bulat dengan jumlah elemen dinamis,
    dan juga mencetak indexnya. Contoh: A[]={6,7,4,3,2}, maka akan mencetak nilai 2, karena 2
    adalah angka genap terkecil, serta akan mencetak di layar > index: 4. Buat fungsi untuk menguji
    apakah suatu bilangan adalah ganjil, fungsi ini nanti dapat anda panggil di fungsi utama.

*/


#include <iostream>

using namespace std;

bool isGanjil(int a);
void genapKecil(int arr[], int n);

int main()
{
    int n;
    cout << "Masukkan jumlah elemen : ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout << "Masukkan elemen ke-" << i+1 << " : ";
        cin >> arr[i];
    }

    genapKecil(arr, n);

    return 0;
}

bool isGanjil(int a)
{
    return a % 2 == 1;
}

void genapKecil(int arr[], int n)
{
    int min = -1;
    int index = -1;

    for(int i=0; i<n; i++)
    {
        if(!isGanjil(arr[i]))
        {
            if(min == -1 || arr[i] < min)
            {
                min = arr[i];
                index = i;
            }
        }
    }

    if(index != -1)
    {
        cout << "Bilangan genap terkecil : " << min << endl;
        cout << "Terletak pada index : " << index << endl;
    }
    else
    {
        cout << "Tidak ada bilangan genap dalam deret." << endl;
    }
}
