#include "Queue.h"
#include <iostream>


Queue::Queue(int capacity) {
    this->arr = new int[capacity];
    this->capacity = capacity;
    this->front = 0;
    this->rear = -1;
    this->size = 0;
}

Queue::~Queue() {
    delete[] arr;
}

void Queue::enqueue(int element) {
    if (size == capacity) {
        std::cout << "Queue is full. Cannot enqueue more elements.\n";
        return;
    }
    rear = (rear + 1) % capacity;
    arr[rear] = element;
    size++;
}

int Queue::dequeue() {
    if (size == 0) {
        std::cout << "Queue is empty. Cannot dequeue any element.\n";
        return -1;
    }
    int dequeuedElement = arr[front];
    front = (front + 1) % capacity;
    size--;
    return dequeuedElement;
}

int Queue::getFront() {
    if (size == 0) {
        std::cout << "Queue is empty. No front element to return.\n";
        return -1;
    }
    return arr[front];
}

int Queue::getRear() {
    if (size == 0) {
        std::cout << "Queue is empty. No rear element to return.\n";
        return -1;
    }
    return arr[rear];
}

int Queue::getSize() {
    return size;
}

bool Queue::isEmpty() {
    return size == 0;
}
