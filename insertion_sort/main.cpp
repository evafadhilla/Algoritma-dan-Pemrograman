#include <iostream>

using namespace std;

int n;   // untuk menginputkan jumlah array
void insertion(int n, int ar[]);  // inisialisasi fungsi , int ar[] digunakan untuk proses sortir

int main()
{
    //Inputan array
    cout << "Masukkan jumlah array : ";
    cin >>n;
    int ar[n];

    for(int i=0; i<n; i++){                 // untuk menginputkan indeks array
        cout << "Indeks bilangan ke- " << i << " : ";
        cin >> ar[i];
    }
    //Cetak Array
    cout << "=== sebelum sorting ====" << endl;
    for(int i=0; i<n; i++){
        cout << ar[i] << " ";
    }

    cout << endl;

    //Insertion
    insertion(n,ar); // untuk memanggil prosedur insertion

    cout << "==== Setelah sorting ====" << endl;
    for(int i=0; i<n; i++){
        cout << ar[i] << " ";
    }
    return 0;
}

void insertion(int n, int ar[]){
    for (int i=1; i<n; i++){   // untuk menentukan indeks array yang akan dibandingkan
        int key=ar[i];     // key tempat menyimpan sementara untuk menukar nilai
        int j=i-1;          // untuk membandingkan key dengan j
        while(j>=0 && ar[j]>key){               //proses membandingkan
            ar[j+1]=ar[j];          // proses swap apabila ar[j]> key
            j--;                    // untuk keluar looping j>=0 dan membandingkan sebelah kiri
        }
        ar[j+1]=key;           
    }
}
