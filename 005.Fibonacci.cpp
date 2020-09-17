//Learn: managing time and space complexity 

#include <iostream>

int main() {
	int arr[2];
	int n;
	arr[0] = 0;
	arr[1] = 1;
	std::cout << "Enter Series length : ";
	std::cin >> n;
	if (n == 0) {
		std::cout << "Ok , Bye!";
		return 0;
	}
	std::cout << "1";
	for (int i = 2; i <= n; i++) {
		int res = arr[0] + arr[1];
		arr[0] = arr[1];
		arr[1] = res;
		std::cout << ", " << arr[1];
	}
	std::cout << " ...";
	return 0;
}
