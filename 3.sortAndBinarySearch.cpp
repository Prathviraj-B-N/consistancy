// Learn simple sort and binary search

#include <iostream>

void place(int* array,int temp,int i);
int binary_search(int* arr, int element, int n);

int main() {
	int SIZE,num;
	std::cout << "How many elements do you want to enter?" << std::endl;
	std::cin >> SIZE;
	int* arr = new int(SIZE);
	arr[0] = 0;
	std::cout << "Enter elements:" << std::endl;
	for (int i = 0; i < SIZE; i++) {
		std::cout << "[" << i + 1 << "/" << SIZE << "]: " ;
		std::cin >> num;
		place(arr,num,i);
	}
	std::cout << "\nDo you want to seach index of any element?[press y/n]"<< std::endl;
	char option;
	std::cin >> option;
	if (option == 'y' || option == 'Y') {
		int ele;
		std::cout << "Enter element to be searched: ";
			std::cin >> ele;
			num = binary_search(arr, ele, SIZE); //"""reusing num variable as temp"""
			if (num == -1) {
				std::cout<<"Not found..." << std::endl;
			}
			else {
				std::cout << "The position of "<<ele<<" is : ["<<num+1<<"/" << SIZE << "] \n";
			}
			
	}
	else {
		std::cout << "\numm.. Fine !" << std::endl;
	}

	for (int i = 0; i < SIZE; i++) {
		std::cout << "[" << i + 1 << "/" << SIZE << "]: " <<arr[i]<< std::endl;
	}
	return 0;
}



void place(int* array,int temp, int i) {

	//    O(n)

	for(int first = 0;first<i;first++){
			if (array[first] > temp) {
				array[first] = array[first] + temp;
				temp = array[first] - temp;
				array[first] = array[first] - temp;
			}
	}
	array[i] = temp;	
}



int binary_search(int* array, int element ,int n) {

	//    O(log(n))

	int max, min, mid;
	max = n;
	min = 0;
	while (min < max) {
		mid = (min + max) / 2;
		if (array[mid] == element) {
			return mid;
		}
		if (element > array[mid]) {
			min = mid + 1;
		}
		else {
			max = mid - 1;
		}
	}
	return -1;
}
