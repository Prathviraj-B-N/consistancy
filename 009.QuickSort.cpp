// quickSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void quickSort(int* array,int l,int r);
int partition(int* array, int l, int r);
void swap(int*, int, int);

int SIZE;

int main()
{
    std::cout << "Hello World!\n How many elements do you want to enter?\n";
    std::cin >> SIZE;
    int* A = new int[SIZE];

    for (int i = 0; i < SIZE; i++) {
        std::cout << "[" << i + 1 << "/" << SIZE << "]:";
        std::cin >> A[i];
    }

    quickSort(A,0,SIZE-1);

    for (int i = 0; i < SIZE; i++) {
        std::cout << "[" << i + 1 << "/" << SIZE << "]:";
        std::cout << A[i]<<'\n';
    }
}

void quickSort(int* A, int l, int r)
{
    if (l < r) {
        int piviot = partition(A, l, r);
        quickSort(A, l, piviot-1);
        quickSort(A, piviot+1,r);

    }
    
}

int partition(int* A, int l, int r)
{
    int i = l-1;
    int piv = A[r];

    for (int x = l; x < r; x++) {
        if (A[x] < piv) {
            i++;
            swap(A, i,x);
        }
        
    }
    swap(A, i + 1, r);
    return (i+1);
}

void swap(int* A, int i, int j) {
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}
