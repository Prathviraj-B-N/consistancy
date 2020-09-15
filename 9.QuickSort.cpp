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

    quickSort(A);
}

void quickSort(int* array, int l, int r)
{
    if (l >= r) {
        int piviot = partition(array, l, r);
        quickSort(array, l, piviot);
        quickSort(array, piviot+1,r);

    }
    
}

int partition(int* array, int l, int r)
{
    int i = l-1;
    int piv = array[r];

    for (int x = l; x < r; x++) {
        if (array[x] < piv) {
            i++;
            swap(array, i + 1,x);
        }
        else {
            
        }
    }
    return (i+1);
}

void swap(int* array, int i, int j) {
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}
