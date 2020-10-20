// matrixMul.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>

using namespace std;

int main() {
	int r1 = 1;
	int c1 = 1;
	int r2 = 99;
	int c2 = 1;
	int a[10][10];
	int b[10][10];
	int c[10][10];

	while (c1 != r2) {
		cout << "Enter size of row 1: ";
			cin >> r1;
			cout << "Enter size of column 1: ";
			cin >> c1;
			cout << "Enter size of row 2: ";
			cin >> r2;
			cout << "Enter size of column 2: ";
			cin >> c2;
		if (c1 != r2) {
			cout << "c1 should be equal to r2" << endl;
		}
	}

	
	cout << "Enter a" << endl;
	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c1; j++) {
			cin >> a[i][j];
		}
	}
	cout << "\nEnter b" << endl;
	for (int i = 0; i < r2; i++) {
		for (int j = 0; j < c2; j++) {
			cin >> b[i][j];
		}
	}
	cout << endl;
	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c2; j++) {
			c[i][j] = 0;
			for (int k = 0; k < c1; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c2; j++) {
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

