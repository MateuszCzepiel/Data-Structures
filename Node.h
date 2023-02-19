#ifndef NODE_H
#define NODE_H

class Node {
private:
    int value;
    Node* next;
public:
    Node(int value);
    int get_data();
    void set_data(int data);
    Node* get_next();
    void set_next(Node* new_next_node);
};

#endif
