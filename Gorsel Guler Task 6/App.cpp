#include <iostream>
#include "Queue.h"

int main() {
    Queue q;

    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    std::cout << "Front element: " << q.peek() << std::endl; 
    std::cout << "Queue size: " << q.size() << std::endl;   

    std::cout << "Dequeued: " << q.dequeue() << std::endl;   
    std::cout << "Front element: " << q.peek() << std::endl; 

    std::cout << "Queue size: " << q.size() << std::endl;    

    return 0;
}
