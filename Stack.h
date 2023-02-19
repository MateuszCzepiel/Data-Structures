#ifndef STACK_H
#define STACK_H

#include <vector>

class Stack {
private:
    std::vector<int> stack;
public:
    Stack();
    void push(int data);
    int pop();
    int peek();
    bool isEmpty();
    int size();
};

#endif
