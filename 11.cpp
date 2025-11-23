//Author – Suraj Singh - 241507 
#include<iostream> 
using namespace std; 
 
class Queue { 
    int arr[5];     
    int front, rear, size; 
 
public: 
    Queue() { 
        front = -1; 
        rear = -1; 
        size = 5; // queue capacity 
    } 
    void enqueue(int val) { 
        if (rear == size - 1) { 
            cout << "\nQueue Overflow! Cannot insert " << val << endl; 
            return; 
        } 
 
        if (front == -1) front = 0;  
        rear++; 
        arr[rear] = val; 
        cout << val << " inserted into queue." << endl; 
    } 
 
    void dequeue() { 
        if (Isempty()) { 
 
            cout << "\nQueue Underflow! No element to delete." << endl; 
            return; 
        } 
 
        cout << "Deleted element: " << arr[front] << endl; 
 
        if (front == rear) { 
            front = rear = -1; 
        } else { 
            front++; 
        } 
    } 
 
    int peek() { 
        if (Isempty()) { 
            cout << "\nQueue is empty! No front element." << endl; 
            return 0; 
        } 
        cout << "Front element: " << arr[front] << endl; 
        return arr[front]; 
    } 
 
    bool Isempty() { 
        return (front == -1); 
    } 
 
    void display() { 
        if (Isempty()) { 
            cout << "\nQueue is empty!" << endl; 
            return; 
 
26 
 
        } 
 
        cout << "\nQueue elements: "; 
        for (int i = front; i <= rear; i++) { 
            cout << arr[i] << " "; 
        } 
        cout << endl; 
    } 
}; 
 
int main() { 
    Queue Q1; 
    Q1.enqueue(10); 
    Q1.enqueue(20); 
    Q1.enqueue(30); 
    Q1.enqueue(40); 
    Q1.enqueue(50); 
    Q1.enqueue(60); // will cause overflow 
 
    Q1.display(); 
 
    Q1.peek(); 
 
    cout << "\nAfter Deletion:" << endl; 
    Q1.dequeue(); 
    Q1.dequeue(); 
    Q1.display(); 
 
    Q1.dequeue(); 
    Q1.dequeue(); 
    Q1.dequeue(); 
    Q1.dequeue(); // underflow 
} 
