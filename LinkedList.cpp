#include "LinkedList.h"
#include <iostream>

LinkedLists::LinkedLists() : first(nullptr), last(nullptr), count(0) {}

void LinkedLists::add_first_node(int value) {
    count++;
    Node* new_node = new Node(value);
    if (first == nullptr) {
        first = new_node;
        last = new_node;
    }
    else {
        new_node->set_next(first);
        first = new_node;
    }
}

void LinkedLists::add_last_node(int value) {
    count++;
    Node* new_node = new Node(value);
    if (first == nullptr) {
        first = new_node;
        last = new_node;
    }
    else {
        last->set_next(new_node);
        last = new_node;
    }
}

void LinkedLists::add_after(int find_data, int add_data) {
    Node* current = first;
    for (int position = 0; position < count; position++) {
        if (current->get_data() == find_data) {
            Node* new_node = new Node(add_data);
            new_node->set_next(current->get_next());
            current->set_next(new_node);
            if (current == last) {
                last = new_node;
            }
            count++;
            return;
        }
        current = current->get_next();
    }
    std::cout << "Element not found in list. Nothing was added\n";
}

void LinkedLists::output() {
    Node* current = first;
    for (int position = 0; position < count; position++) {
        std::cout << current->get_data() << std::endl;
        current = current->get_next();
    }
}

bool LinkedLists::check_if_contains(int data) {
    Node* current = first;
    while (current != nullptr) {
        if (current->get_data() == data) {
            return true;
        }
        current = current->get_next();
    }
    return false;
}

int LinkedLists::find_data(int data) {
    Node* current = first;
    for (int position = 0; position < count; position++) {
        if (current->get_data() == data) {
            return position;
        }
        current = current->get_next();
    }
    return false;
}