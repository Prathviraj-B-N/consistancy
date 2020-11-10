// classNobjects.cpp : This is a practice code to understand class ,onjects and types of constructors

#include <iostream>

class library {
private:
    std::string bookName, author;
    float cost;
public:
    void setValues() {
        std::cout << "Enter book name: ";
        std::cin >> bookName;
        std::cout << "Enter author name: ";
        std::cin >> author;
        std::cout << "Enter book cost(rs): ";
        std::cin >> cost;
    }
    void getValues() {
        std::cout << "Book name: "<< bookName<<std::endl;
        std::cout << "Author name: " << author << std::endl;
        std::cout << "Book cost: " << cost << std::endl << std::endl;
    }

    //default constructor
    library() {
        setValues();
        std::cout << std::endl;
        getValues();
    }

    //parameterised constructor
    library(std::string book ,std::string author="Unknown!" ,float cost = -1) {
        this->bookName = book;
        this->author = author;
        this->cost = cost;
        std::cout << std::endl;
        getValues();
    }

    //copy constructor
    library(library& obj) {
        this->bookName = obj.bookName;
        this->author = obj.author;
        this->cost = obj.cost;
        std::cout << "copied!\n";
        getValues();
    }

};

int main()
{
    std::cout << "Hello!\n";

    //method 1
    library book1;

    //method 2
    library book2("Clean Code", "Martin",599);
    library book2_1("Clean Code");

    //copy constructors obj def
    library book3(book2);
    library book4 = book1;
    return 0;
}
