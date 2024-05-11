#include <iostream>
using namespace std;

// Node class representing a single node in the linked list
class Node {
    public:
        int data;
        Node* next;

        Node() {
            next = NULL;
        }
};

// stack class

class Stack {
    private:
        Node* top; // pointer to the top node of the stack

    public:
        Stack(){
            top = NULL; // initialize the stack with a null top pointer
        }

        // push operation: Insert an element into he top of the stack
        int push(int value){
            Node* newNode = new Node(); // 1. Allocate memory for the new node
            newNode->data = value; // 2. assign value
        }
};