/*
    Nama     : Eva Fadhillah Ulia
    NIM      : A11.2022.14283
    Kelompok : A11.4207

    Soal No.2
    Buatlah program yang menerapkan 2 metode pengurutan (sorting) yang anda ketahui beserta
    contoh pemanggilannya di program main body (selain Bogosort). Pengurutan dilakukan secara
    descending (besar ke kecil). Contoh: A[]={5,4,3,2,2,1,1}.
*/


#include <iostream>

using namespace std;

void printArray(int arr[], int n);
void bubbleSort(int arr[], int n);
void insertionSort(int arr[], int n);

int main()
{
    int arr[] = {2, 1, 4, 2, 1, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array sebelum diurutkan : ";
    printArray(arr, n);

    bubbleSort(arr, n);
    insertionSort(arr, n);

    return 0;
}

void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// BUBBLE SORT

void bubbleSort(int arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(arr[j] < arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout << "Bubble sort             : ";
    printArray(arr, n);
}

// INSERTION SORT

void insertionSort(int arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] < key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    cout << "Insertion sort          : ";
    printArray(arr, n);
}
