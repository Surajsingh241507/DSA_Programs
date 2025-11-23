//Author – Suraj Singh - 241507
#include <iostream> 
using namespace std; 
// Node structure 
struct Node { 
int data; 
Node* next; 
}; 
// Stack class using linked list 
class Stack { 
private: 
Node* top; 
public: 
Stack() { 
top = NULL; 
} 
// Push operation 
void push(int value) { 
Node* newNode = new Node(); 
newNode->data = value; 
newNode->next = top; 
top = newNode; 
cout << value << " pushed to stack.\n"; 
} 
// Pop operation 
20 
 
21 
 
    void pop() { 
        if (top == NULL) { 
            cout << "Stack Underflow! Nothing to pop.\n"; 
            return; 
        } 
        Node* temp = top; 
        cout << temp->data << " popped from stack.\n"; 
        top = top->next; 
        delete temp; 
    } 
 
    // Peek operation 
    void peek() { 
        if (top == NULL) { 
            cout << "Stack is empty.\n"; 
            return; 
        } 
        cout << "Top element: " << top->data << endl; 
    } 
 
    // Display operation 
    void display() { 
        if (top == NULL) { 
            cout << "Stack is empty.\n"; 
            return; 
        } 
        cout << "Stack (top -> bottom): "; 
        Node* temp = top; 
        while (temp != NULL) { 
            cout << temp->data << " "; 
 
22 
 
            temp = temp->next; 
        } 
        cout << endl; 
    } 
}; 
 
int main() { 
    Stack st; 
    int choice, value; 
 
    do { 
        cout << "\n--- Stack using Linked List ---\n"; 
        cout << "1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n"; 
        cout << "Enter your choice: "; 
        cin >> choice; 
 
        switch (choice) { 
            case 1: 
                cout << "Enter value to push: "; 
                cin >> value; 
                st.push(value); 
                break; 
 
            case 2: 
                st.pop(); 
                break; 
 
            case 3: 
                st.peek(); 
                break; 
          
            case 4: 
                st.display(); 
                break; 
 
            case 5: 
                cout << "Exiting...\n"; 
                break; 
 
            default: 
                cout << "Invalid choice! Try again.\n"; 
        } 
 
    } while (choice != 5); 
 
    return 0; 
}
