#include <iostream>
#include "list.h"
#include "stack.h"

using namespace std;
// initialize the Stack Class
Stack::Stack() {
}

// Deconstruct the Stack Class
Stack::~Stack(){
}

// Push an intiger onto the stack
void Stack::Push( int n ) {
    top_ofStack.addNode(n);
}

// Pop an intiger off the stack
int Stack::Pop() {
    int top = top_ofStack.firstNode();
    top_ofStack.removeNode(top);
    return top;
}

// check to see if the stack is empty
int Stack::IsEmpty() {
    return top_ofStack.isEmpty();
}

// print out the stack
void Stack::Print() {
    top_ofStack.printList();
}
