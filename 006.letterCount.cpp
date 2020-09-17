#include <iostream>
#include<string>
void count(std::string);

int main()
{
    std::string str;
    std::cout << "Hello, Enter a string: ";
    std::cin >> str;

    count(str);
    return 0;
}

void count(std::string str) {
    //create hash table of 26 length
    int HT[26] = { 0 };
    for (int i = 0; i < str.length(); i++) {

        //Convert uppercase to lower
        if (str[i] < 97) {
            str[i] += 32;
        }
        int index = str[i] - 97;
        HT[index] += 1;
    }
    for (int i = 0; i < 26; i++) {
        if (HT[i] > 0) {
            std::cout<<(char)(i + 97)<<":"<< HT[i]<<"\n";
        }
    }
}
