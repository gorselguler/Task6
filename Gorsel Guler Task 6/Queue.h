#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>


struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class Queue {
private:
    Node* head; 
    Node* tail; 
    int count;

public:
    
    Queue() : head(nullptr), tail(nullptr), count(0) {}

    
    ~Queue() {
        while (!isEmpty()) {
            dequeue();
        }
    }

    
    bool isEmpty() const {
        return count == 0;
    }

    
    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (isEmpty()) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
        count++;
    }

    
    int dequeue() {
        if (isEmpty()) {
            throw std::underflow_error("Queue is empty!");
        }

        int value = head->data;
        Node* temp = head;
        head = head->next;

        if (head == nullptr) { 
            tail = nullptr;
        }

        delete temp;
        count--;
        return value;
    }

    
    int peek() const {
        if (isEmpty()) {
            throw std::underflow_error("Queue is empty!");
        }
        return head->data;
    }

    
    int size() const {
        return count;
    }
};

#endif 
