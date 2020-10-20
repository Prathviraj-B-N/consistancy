// starPatterns.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void normal(short int n) {
    cout << "--normal--" << endl << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

void oddEven(short int n) {
    cout << "--oddEven--" << endl << endl;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                if (j % 2 == 0)
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
        else {
            for (int j = 0; j < n; j++) {
                if (j % 2 == 0)
                    cout << "  ";
                else
                    cout << "* ";
            }
            cout << endl;
        }
    }
    cout << endl;
}

void leftLower(short int n) {
    cout << "--leftLower--" << endl << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j <= i) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
            
        }
        cout << endl;
    }
    cout << endl;
}

void rightLower(short int n) {
    cout << "--rightLower--" << endl<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j <n-i-1 ) {
                cout << "  ";
            }
            else {
                cout << "* ";
            }

        }
        cout << endl;
    }
    cout << endl;
}

void leftUpper(short int n) {
    cout << "--leftUpper--" << endl << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j <= n - 1 - i) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }

        }
        cout << endl;
    }
    cout << endl;
}

void rightUpper(short int n) {
    cout << "--rightUpper--" << endl << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j >= i) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

void invertedTriangle(short int n) {
    cout << "--invertedTringle--" << endl << endl;
    if (n % 2 == 0) {
        n = n + 1;
    }
    for (int i = 0; i < n-2; i++) {
        for (int j = 0; j < n; j++) {
            if (j >= i && j< n-i) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;

}


void Triangle(short int n) {
    cout << "--Tringle--" << endl << endl;
    if (n % 2 == 0) {
        n = n + 1;
    }
    for (int i = 0; i < n - 2; i++) {
        for (int j = 0; j < n; j++) {
            if (j >= n/2 - i && j <= n/2 + i) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;

}
int main()
{
    short int n;
    cout << "Enter n"<<endl;
    cin >> n;
    normal(n);
    oddEven(n);
    leftUpper(n);
    leftLower(n);
    rightUpper(n);
    rightLower(n);
    invertedTriangle(n);
    Triangle(n);
    return 0;
}
