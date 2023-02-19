#ifndef QUEUE_H
#define QUEUE_H

class Queue {
private:
    int* arr; 
    int capacity;
    int front;
    int rear;
    int size;
public:
    Queue(int capacity);
    ~Queue();
    void enqueue(int element);
    int dequeue();
    int getFront();
    int getRear();
    int getSize();
    bool isEmpty();
};

#endif
