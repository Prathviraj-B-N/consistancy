#include <iostream>


void bubble_sort(int* array,int size);

int main()
{
    short int SIZE;
    std::cout << "Enter Size of the array:\n";
    std::cin >> SIZE;
    int *array = new int[SIZE];

    std::cout << "Enter Elements\n";
    for (int i = 0; i < SIZE; i++) {
        std::cout << '['<<i + 1 <<'/'<< SIZE<<']';
        std::cin >> array[i];
    }

    bubble_sort(array,SIZE);
}


void bubble_sort(int* array,int n) {
    for (int i = 0; i < n-1;i++){
        for (int j =0; j < n - i - 1 ;j++){
            if (array[j] > array[j + 1]) {
                int temp;
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
        if (i == n - 2) {
            std::cout << "output:";
        }
        for (int x= 0; x < n; x++) {
            
            std::cout << array[x] << " ";
        }
        std::cout<< "\n";
    }
}
