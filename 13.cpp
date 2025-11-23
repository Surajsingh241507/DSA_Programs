//Author – Suraj Singh - 241507 
#include <iostream> 
#include <stack> 
using namespace std; 
 
class QueueUsingStacks { 
private: 
    stack<int> s1, s2;  // Two stacks 
 
public: 
    // Enqueue operation 
    void enqueue(int value) { 
        s1.push(value); 
        cout << value << " enqueued.\n"; 
    } 
 
    // Dequeue operation 
    int dequeue() { 
        if (isEmpty()) { 
            cout << "Queue Underflow! Nothing to dequeue.\n"; 
            return -1; 
        } 
 
        // Move all elements from s1 → s2 only if s2 is empty 
        if (s2.empty()) { 
            while (!s1.empty()) { 
                s2.push(s1.top()); 
                s1.pop(); 
            }
        } 
 
        int removed = s2.top(); 
        s2.pop(); 
        cout << removed << " dequeued.\n"; 
        return removed; 
    } 
 
    // Peek front element 
    int peek() { 
        if (isEmpty()) { 
            cout << "Queue is empty.\n"; 
            return -1; 
        } 
 
        if (s2.empty()) { 
            while (!s1.empty()) { 
                s2.push(s1.top()); 
                s1.pop(); 
            } 
        } 
 
        cout << "Front element: " << s2.top() << '\n'; 
        return s2.top(); 
    } 
 
    // Check if queue is empty 
    bool isEmpty() const { 
        return s1.empty() && s2.empty(); 
    } 
 
35 
 
 
    // Display queue contents (front → rear) 
    void display() { 
        if (isEmpty()) { 
            cout << "Queue is empty.\n"; 
            return; 
        } 
 
        // To display, copy stacks (no modification to original) 
        stack<int> tempS1 = s1; 
        stack<int> tempS2 = s2; 
 
        cout << "Queue (front → rear): "; 
 
        // First print elements of s2 (already in correct order) 
        while (!tempS2.empty()) { 
            cout << tempS2.top() << " "; 
            tempS2.pop(); 
        } 
 
        // Now print elements of s1 in correct order 
        // Reverse s1 into a temp stack 
        stack<int> rev; 
        while (!tempS1.empty()) { 
            rev.push(tempS1.top()); 
            tempS1.pop(); 
        } 
 
        while (!rev.empty()) { 
            cout << rev.top() << " "; 
 
36 
 
            rev.pop(); 
        } 
 
        cout << "\n"; 
    } 
}; 
 
int main() { 
    QueueUsingStacks q; 
 
    // Predefined operations 
    q.enqueue(10); 
    q.enqueue(20); 
    q.enqueue(30); 
 
    q.display(); 
    q.peek(); 
 
    q.dequeue(); 
    q.display(); 
 
    q.enqueue(40); 
    q.enqueue(50); 
    q.display(); 
 
    q.dequeue(); 
    q.dequeue(); 
    q.display(); 
 
    q.dequeue(); 
    q.dequeue(); 
    q.dequeue();  // Underflow case 
    return 0; 
}
