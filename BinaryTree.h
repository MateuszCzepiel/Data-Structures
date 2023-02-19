#ifndef TREE_H
#define TREE_H

#include <iostream>

class Tree {
private:
    struct Node {
        int data;
        Node* left;
        Node* right;
        Node(int data) : data(data), left(nullptr), right(nullptr) {}
    };
    Node* root;
    void destroySubtree(Node* node);
    void insertNode(Node*& node, int value);
    void inOrderTraversal(Node* node);
    void preOrderTraversal(Node* node);
    void postOrderTraversal(Node* node);

public:
    Tree();
    ~Tree();
    void insert(int value);
    void inOrder();
    void preOrder();
    void postOrder();
};

#endif
