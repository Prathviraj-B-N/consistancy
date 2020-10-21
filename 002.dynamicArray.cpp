//Learn: new keyword

#include <iostream>

int main() {
	int size;
	int *array;
	std::cout << "Enter size of array: ";
	std::cin >> size;

	array = new int[size];
	std::cout << "Enter elements :\n";
	for (int i = 0; i < size; i++) {
		
		std::cout << "[" << i + 1 << "/" << size << "] : ";
		std::cin >> array[i];
	}

	std::cout << "Entered elements :\n";;

	for (int i = 0; i < size; i++) {
		std::cout << "[" << i + 1 << "/" << size << "] : ";
		std::cout << array[i]<<"\n";
	}
	
	return *array;
}
