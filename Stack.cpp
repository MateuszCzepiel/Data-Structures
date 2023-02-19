#include "stack.h"
#include <stdexcept>
#include <iostream>

Stack::Stack() {}

void Stack::push(int data) {
    stack.push_back(data);
}

int Stack::pop() {
    if (isEmpty()) {
        std::cout << "Stack is empty\n";
        return -1;
    }
    int popped_data = stack.back();
    stack.pop_back();
    return popped_data;
}

int Stack::peek() {
    if (isEmpty()) {
        std::cout << "Stack is empty\n";
        return -1;
    }
    return stack.back();
}

bool Stack::isEmpty() {
    return stack.empty();
}

int Stack::size() {
    return stack.size();
}
