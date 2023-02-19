#ifndef LINKED_LISTS_H
#define LINKED_LISTS_H

#include "Node.h"

class LinkedLists {
private:
    Node* first;
    Node* last;
    int count;
public:
    LinkedLists();
    void add_first_node(int value);
    void add_last_node(int value);
    void add_after(int find_data, int add_data);
    void output();
    bool check_if_contains(int data);
    int find_data(int data);
};

#endif