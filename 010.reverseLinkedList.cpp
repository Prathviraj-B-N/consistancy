// reverseLinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class NODE {
public: 
    int data;
    NODE* next;
};
NODE *reverse(NODE* ptr);

int main()
{
    int n;
    NODE* head = NULL;
    std::cout << "Hello World!\nEnter the number of nodes you want to enter: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cout<<"["<<i+1<<"/"<<n<<"]:";
        NODE *newNode = new NODE();
        std::cin >> newNode->data;
        newNode->next = head;
        head = newNode;
    }
    
    NODE *node = head;
    while (node != NULL) {
        std::cout << node->data<<" ";
        node = node->next;
    }

    head = reverse(head);
    
    std::cout << " \n";
    node = head;

    while (node != NULL) {
        std::cout << node->data << " ";
        node = node->next;
    }
}

NODE* reverse(NODE* head) {
    NODE* cur = head;
    NODE* prev = NULL;
    NODE* next = head->next;
    head->next = NULL;
    while (next != NULL) {
        prev = cur; 
        cur = next;
        next = next->next;
        cur->next = prev;
    }
    head = cur;
    return head;
}
