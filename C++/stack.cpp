//
//  main.cpp
//  Stack
//
//  Created by Dmitry Kurilo on 6/9/13.
//  Copyright (c) 2013 Kurilo Dmitry. All rights reserved.
//

#include <iostream>

using namespace std;

struct stack {
    int data;
    struct stack *prev;
};

void push(stack *& pointer, int data) {
    stack *newNode = new stack;
    newNode->prev = pointer;
    newNode->data = data;
    pointer = newNode;
}

int pop(stack *& pointer) {
    int data = pointer->data;
    pointer = pointer->prev;
    return data;
}

int main() {
    stack *node = new stack;
    node->data = 0;
    push(node, 333);
    push(node, 999);
    cout << pop(node) << std::endl << pop(node) << endl << pop(node);
    /*
     output:
     999
     333
     0
    */
}

