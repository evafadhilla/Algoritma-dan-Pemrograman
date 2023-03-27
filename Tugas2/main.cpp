/*
    Program Fungsi dan Prosedur
    {Program Fungsi dan Prosedur untuk menentukan isEven, isOdd, isFactor,
    maxN, minN, maxArray, minArray, isFound dan swapN}
    Nama        : Eva Fadhillah Ulia
    NIM         : A11.2022.14283
    Kelompok    : A11.4207
*/

#include <iostream>
#include <stdbool.h>

using namespace std;

// Deklarasi Fungsi dan Prosedur
bool isEven(int x);
bool isOdd(int x);
bool isFactor(int x, int y);
int maxN(int a, int b);
int minN(int a, int b);
int maxArray(int a[]);
int minArray(int a[]);
bool isFound(int x, int a[]);
void swapN(int a, int b);

int sum;
void arr(int myArr[]);

int main()
{
    // Kamus
    int x, y, n;     // => n jumlah elemen arr yang diinput

    // Algoritma
    cout << "================================ Program Fungsi dan Prosedur =========================================" << endl;
    cout << "Masukkan nilai x = ";
    cin >> x;
    cout << "Masukkan nilai y = ";
    cin >> y;

    cout << endl;
    cout << "========================= Hasil isEven , isOdd, isFactor, maxN dan minN ==============================" << endl;
    cout << "Apakah bilangan x = " << x << " \t termasuk bilangan genap  ?\t = " << isEven(x) << endl;                          // => akan menghasilkan 1 jika pernyataan true dan 0 jika pernyataan false
    cout << "Apakah bilangan y = " << y << " \t termasuk bilangan genap  ?\t = " << isEven(y) << endl;
    cout << "Apakah bilangan x = " << x << " \t termasuk bilangan ganjil ?\t = " << isOdd(x) << endl;
    cout << "Apakah bilangan y = " << y << " \t termasuk bilangan ganjil ?\t = " << isOdd(y) << endl;
    cout << "Apakah bilangan x = " << x << " \t adalah faktor dari bilangan y = " << y << " ?\t = " << isFactor(y, x) << endl;
    cout << "Apakah bilangan y = " << y << " \t adalah faktor dari bilangan x = " << x << " ?\t = " << isFactor(x, y) << endl;
    cout << "Manakah bilangan yang lebih besar, antara x = " << x << "\t dan y = " << y << " ?\t = " << maxN(x, y) << endl;
    cout << "Manakah bilangan yang lebih kecil, antara x = " << x << "\t dan y = " << y << " ?\t = " << minN(x, y) << endl;

    cout << endl;
    cout << "================================================ Array =============================================== " << endl;
    cout << "Masukkan jumlah elemen array = ";
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++)
    {
        cout << "Masukkan bilangan indeks ke-[" << i << "] = ";
        cin >> a[i];
    }
    sum = sizeof(a)/sizeof(int);

    cout << endl;
    cout << "============================================= Hasil Array =============================================" << endl;
    cout << "Manakah bilangan terbesar dalam ";
    arr(a);
    cout << " ?\t = " << maxArray(a) << endl;
    cout << "Manakah bilangan terkecil dalam ";
    arr(a);
    cout << " ?\t = " << minArray(a) << endl;
    cout << "Apakah bilangan x = " << x << "\t ada dalam ";
    arr(a);
    cout << " ? = " << isFound(x,a) << endl;
    cout << "Apakah bilangan y = " << y << "\t ada dalam ";
    arr(a);
    cout << " ? = " << isFound(y,a) << endl;

    cout << endl;
    cout << "========================================== Tukar Bilangan =============================================" << endl;
    swapN(x, y);
    cout << endl;

    return 0;
}

bool isEven(int x)
{
    return x % 2 == 0;
}

bool isOdd(int x)
{
    return x % 2 == 1;
}

bool isFactor(int x, int y)
{
    return x % y == 0;
}

int maxN(int a, int b)
{
    int m;
    if(a > b)
    {
        m = a;
    }
    else
    {
        m = b;
    }
    return m;
}

int minN(int a, int b)
{
    int m;
    if(a < b)
    {
        m = a;
    }
    else
    {
        m = b;
    }
    return m;
}

int maxArray(int a[])
{
    int m = 0;
    for(int i=0; i < sum; i++)
    {
        if(a[i] > m)
        {
            m = a[i];
        }
    }
    return m;
}


int minArray(int a[])
{
    int m = a[0];
    for(int i=0; i < sum; i++)
    {
        if(a[i] < m)
        {
            m = a[i];
        }
    }
    return m;
}

bool isFound(int x, int a[])
{
    bool m = 0;
    for(int i=0; i<sum; i++)
    {
        if(x == a[i])
        {
            m = 1;
        }
    }
    return m;
}

void arr(int myArr[])
{
    cout << "Array [" << sum << "] = { ";
    for(int i=0; i<sum; i++)
    {
       cout << myArr[i];
       if(i < sum - 1)
       {
           cout << ", ";
       }
       else
       {
           cout << " ";
       }
    }
    cout << "}";
}

void swapN(int a, int b)
{
    cout << "Tukar bilangan x = " << a << " dan y = " << b << " \t => \t ";
    int temp = a;
    a = b;
    b = temp;
    cout << "x = " << a << " dan y = " << b;
}
