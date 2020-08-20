//Learn Stack 

#include <iostream>
#include <string>

void displayStackOp(char stk);
int findLen(std::string name);
void createStk(char *stk, std::string name, int size);

int main()
{
    std::string name;
    std::cout << "Enter your name : " ;
    std::cin >> name;
    int SIZE = findLen(name);
    char* stk = new char[SIZE];

    createStk(stk, name, SIZE);

    //todo:: display how reversing a stack works


    return 0;
}

int findLen(std::string name) {
    int i=0, count=0;
    while (name[i++] != '\0') {
        count++;
    }
    return count;
}

void createStk(char* stk, std::string name, int size) {
    for (int i = 0; i < size; i++) {
        stk[i] = name[i];
    }
    return;
}
