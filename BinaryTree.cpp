#include "BinaryTree.h"

Tree::Tree() : root(nullptr) {}

Tree::~Tree() {
    destroySubtree(root);
}

void Tree::destroySubtree(Node* node) {
    if (node) {
        destroySubtree(node->left);
        destroySubtree(node->right);
        delete node;
    }
}

void Tree::insert(int value) {
    insertNode(root, value);
}

void Tree::insertNode(Node*& node, int value) {
    if (node == nullptr) {
        node = new Node(value);
    }
    else if (value < node->data) {
        insertNode(node->left, value);
    }
    else {
        insertNode(node->right, value);
    }
}

void Tree::inOrder() {
    inOrderTraversal(root);
    std::cout << std::endl;
}

void Tree::inOrderTraversal(Node* node) {
    if (node) {
        inOrderTraversal(node->left);
        std::cout << node->data << " ";
        inOrderTraversal(node->right);
    }
}

void Tree::preOrder() {
    preOrderTraversal(root);
    std::cout << std::endl;
}

void Tree::preOrderTraversal(Node* node) {
    if (node) {
        std::cout << node->data << " ";
        preOrderTraversal(node->left);
        preOrderTraversal(node->right);
    }
}

void Tree::postOrder() {
    postOrderTraversal(root);
    std::cout << std::endl;
}

void Tree::postOrderTraversal(Node* node) {
    if (node) {
        postOrderTraversal(node->left);
        postOrderTraversal(node->right);
        std::cout << node->data << " ";
    }
}
