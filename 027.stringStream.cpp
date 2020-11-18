//https://www.hackerrank.com/challenges/c-tutorial-stringstream/
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    // Complete this function
    vector<int> num_vector;
    int num;
    char ch;
    stringstream ss(str); //convert string int stringstream object
    while(ss>>num){      // since num is int type , move int data from ss to num untill any other data type is found in ss obj.
        nums.push_back(num);
        ss>>ch;         //move ',' to ch and move forward so we get rest of the numbers 
    }
    return num_vector;
    
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
