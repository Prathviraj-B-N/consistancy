//Learn Stack 

#include <iostream>
#include <string>

void displayStackOp(char* item, int box, int size);
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
    for (int i = 0; i < SIZE; i++) {
        std::cout<< "|" << stk[i] << "|\n";
    }

    std::cout << "_ _ _ _ _ _ _ _ _ " << std::endl;


    for (int i = 0; i < SIZE; i++) {
        displayStackOp(stk, i, SIZE);
    }
    

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


void displayStackOp(char* item, int j, int size) {
    
    for (int i = 0; i < size - j -1; i++) {
        std::cout << "| |\n";
    }
    for (int i = j; i >= 0; i--) {
        std::cout << "|" << item[i] << "|\n";
    }
    std::cout << "---\n";
    std::cout << "\n";
}
