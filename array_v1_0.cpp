#include<iostream>

void main() {
	int arr[5];
	std::cout << "Enter 5 elements:\n";
	for (int i = 0; i < 5; i++) {
		std::cin >> arr[i];
	}

	for (int i = 0; i < 5; i++) {
		std::cout <<"arr["<<i<<"] - > "<< arr[i]<<"\n";
	}
}
