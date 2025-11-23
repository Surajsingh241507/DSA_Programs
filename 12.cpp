//Author – Suraj Singh - 241507 
#include <iostream> 
using namespace std; 
// Node implemented as a class 
class Node { 
public: 
int data; 
Node* next; 
Node(int val) : data(val), next(nullptr) {} 
}; 
// Queue implemented using linked list (classes only) 
class Queue { 
private: 
Node* front; 
Node* rear; 
public: 
Queue() : front(nullptr), rear(nullptr) {} 
~Queue() { 
// free all nodes 
while (!isEmpty()) dequeue(); 
} 
bool isEmpty() const { 
return front == nullptr; 
28 
 
29 
 
    } 
 
    // Enqueue (insert at rear) 
    void enqueue(int val) { 
        Node* newNode = new Node(val); 
        if (rear == nullptr) {      // empty queue 
            front = rear = newNode; 
        } else { 
            rear->next = newNode; 
            rear = newNode; 
        } 
        cout << val << " enqueued to queue.\n"; 
    } 
 
    // Dequeue (remove from front) 
    int dequeue() { 
        if (isEmpty()) { 
            cout << "Queue Underflow! Nothing to dequeue.\n"; 
            return -1; // sentinel 
        } 
        Node* temp = front; 
        int retval = temp->data; 
        front = front->next; 
        if (front == nullptr) rear = nullptr; // queue became empty 
        delete temp; 
        cout << retval << " dequeued from queue.\n"; 
        return retval; 
    } 
 
    // Peek / front element 
    int peek() const { 
        if (isEmpty()) { 
            cout << "Queue is empty. No front element.\n"; 
            return -1; 
        } 
        cout << "Front element: " << front->data << '\n'; 
        return front->data; 
    } 
 
    // Display queue from front to rear 
    void display() const { 
        if (isEmpty()) { 
            cout << "Queue is empty.\n"; 
            return; 
        } 
        cout << "Queue (front -> rear): "; 
        Node* temp = front; 
        while (temp != nullptr) { 
            cout << temp->data; 
            if (temp->next) cout << " "; 
            temp = temp->next; 
        } 
        cout << '\n'; 
    } 
}; 
 
int main() { 
    // Predefined demonstration (no user input) 
    Queue q; 
 
// Enqueue some elements 
q.enqueue(10); 
q.enqueue(20); 
q.enqueue(30); 
// Display current queue 
q.display(); 
// Peek front 
q.peek(); 
// Dequeue one element 
q.dequeue(); 
// Display after dequeue 
q.display(); 
// More operations 
q.enqueue(40); 
q.enqueue(50); 
q.display(); 
// Dequeue all elements 
while (!q.isEmpty()) q.dequeue(); 
// Try dequeue on empty queue (to show underflow handling) 
q.dequeue(); 
return 0; 
} 
