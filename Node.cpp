#include "Node.h"

Node::Node(int value) : value(value), next(nullptr) {}

int Node::get_data() {
    return value;
}

void Node::set_data(int data) {
    value = data;
}

Node* Node::get_next() {
    return next;
}

void Node::set_next(Node* new_next_node) {
    next = new_next_node;
}
