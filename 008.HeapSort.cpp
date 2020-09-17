#include <iostream>

void heap_sort(int* A);
void make_heap(int* A);
void  max_heapify(int* A,int i);
void swap(int* A, int i, int j);

int heap_size, SIZE;

int main(){
    std::cout << "Hello World!\nHow many elements do you want to sort?\n";
    std::cin >> SIZE;
    int* A = new int[SIZE];
    heap_size = SIZE;
    for (int i = 1; i <= SIZE; i++) {
        std::cin >> A[i];
    }
    heap_sort(A);
    for (int i = 1; i <= SIZE; i++) {
        std::cout<< A[i]<<" ";
    }
    return 0;
}

void heap_sort(int* A)
{
    make_heap(A);
    for (int i = SIZE; i >= 2; i--) {
        swap(A,1,i);
        heap_size -= 1;
        max_heapify(A, 1);
    }
}

void make_heap(int* A) {
    for (int i = SIZE / 2; i >= 1; i--) {
        max_heapify(A, i);
    }
 }

void  max_heapify(int* A, int root) {
    int left ;
    int right;
    int largest_index;
    left  = 2 * root;
    right  = left + 1;

    if ((left <= heap_size) && (A[left] > A[root])) {
        largest_index = left;
    }
    else {
        largest_index = root;
    }

    if ((right<= heap_size) && (A[right]>A[largest_index])) {
        largest_index = right;
    }

    if (largest_index != root) {
        swap(A, root, largest_index);
        max_heapify(A, largest_index);
    }
}

void swap(int* A, int i, int j) {
    int temp;
    temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}
