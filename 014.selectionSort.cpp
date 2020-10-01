//time : O(n2)
//space: O(1)
//stable ,online sorting
#include <iostream>

void selection_sort(int* a, int n) {

    for (int i = 0; i < n - 1; i++){
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (a[min_index] > a[j]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            int temp = a[i];
            a[i] = a[min_index];
            a[min_index] = temp;
        }
    }

    for (int i = 0; i < n; i++) {
        std::cout << '[' << i + 1 << '/' << n << "]:";
        std::cout << a[i]<<std::endl;
    }
}


int main()
{
    short int SIZE;
    std::cout << "Enter Size of the array:\n";
    std::cin >> SIZE;
    int* array = new int[SIZE];

    std::cout << "Enter Elements:\n";
    for (int i = 0; i < SIZE; i++) {
        std::cout << '[' << i + 1 << '/' << SIZE << "]: ";
        std::cin >> array[i];
    }

    selection_sort(array, SIZE);

    return 0;
}
