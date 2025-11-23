//Author – Suraj Singh - 241507 
#include <iostream> 
using namespace std; 
 
class Stack { 
    int arr[5];  // fixed size array 
    int topIndex; // to track the top element 
    int capacity; // maximum size of stack 
 
public: 
    Stack() { 
        topIndex = -1; 
        capacity = 5;  // you can change this as needed 
    } 
 
    // push an element onto stack 
    void push(int val) { 
        if (full()) { 
            cout << "Stack Overflow! Cannot push " << val << endl; 
            return; 
        } 
        topIndex++; 
        arr[topIndex] = val; 
    } 
 
    // pop and print the top element 
    void pop() { 
        if (empty()) { 
 
18 
 
            cout << "\nStack Underflow!" << endl; 
            return; 
        } 
        cout << arr[topIndex] << " " ; 
        topIndex--; 
    } 
 
    // return top element 
    int top() { 
        if (empty()) { 
            cout << "Stack is empty!" << endl; 
            return -1; 
        } 
        return arr[topIndex]; 
    } 
 
    // check if stack is empty 
    bool empty() { 
        return topIndex == -1; 
    } 
 
    // check if stack is full 
    bool full() { 
        return topIndex == capacity - 1; 
    } 
}; 
 
int main() { 
    Stack s; 
    s.push(10); 
    s.push(20); 
    s.push(30); 
    s.push(40); 
    s.push(50); 
    s.push(60);  // should trigger "Stack Overflow" 
 
    while (!s.empty()) { 
        s.pop(); 
    } 
    s.pop();  // should trigger "Stack Underflow" 
 
    return 0; 
} 
