// evenOddSort.cpp : Given an array of n element . Sort the array such that all even elements appear before odd and they must be in sorted order
//sample input: n=5; arr[] = {7,2,1,5,8}; output[] = {2,8,1,5,7}  
//
#include <iostream>

int N;

void EOsort(int *arr) {

    for (int i = 1; i <N; i++) {
        int j = i - 1;
        int temp = arr[i];
        if (arr[i] % 2 == 0) {
            //move j to j+1 till j is odd or its value is greater than our element
            while ((arr[j] % 2 != 0 && j > -1) || (j > -1 && arr[j] > temp)) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = temp;
        }
        else {
            //move j to j+1 till we dont encounter any even ele and its value is greater than our element
            while ( j > -1 && arr[j]%2!=0 && arr[j] > temp) {
                if (arr[j] % 2 == 0) {
                    arr[j + 1] = temp;
                    break;
                }
                else {
                    arr[j + 1] = arr[j];
                    j--;
                }
                arr[j + 1] = arr[j];
            }
            arr[j + 1] = temp;

        }

    }


    for (int i = 0; i < N; i++) {
        std::cout<< arr[i]<<" ";
    }
}
int main()
{
    while (1) {
        std::cout << "Enter N:" << std::endl;
        std::cin >> N;

        int* arr = new int[N];
        for (int i = 0; i < N; i++) {
            std::cin >> arr[i];
        }

        EOsort(arr);
    }
}
