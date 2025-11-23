//Author – Suraj Singh - 241507 
#include <iostream> 
using namespace std; 
class Node { 
public: 
int data; 
Node* next; 
Node(int value) { 
data = value; 
next = nullptr; 
} 
}; 
class LinkedList { 
private: 
Node* head; 
public: 
LinkedList() { 
head = nullptr; 
} 
// Insert at beginning 
void insertAtBeginning(int value) { 
Node* newNode = new Node(value); 
newNode->next = head; 
38 
 
39 
 
        head = newNode; 
        cout << value << " inserted at beginning.\n"; 
    } 
 
    // Insert at end 
    void insertAtEnd(int value) { 
        Node* newNode = new Node(value); 
 
        if (head == nullptr) { 
            head = newNode; 
        } else { 
            Node* temp = head; 
            while (temp->next != nullptr) 
                temp = temp->next; 
            temp->next = newNode; 
        } 
 
        cout << value << " inserted at end.\n"; 
    } 
 
    // Insert at a given position (middle) 
    void insertAtPosition(int value, int position) { 
        Node* newNode = new Node(value); 
 
        // Insert at head if position is 1 
        if (position == 1) { 
            newNode->next = head; 
            head = newNode; 
            cout << value << " inserted at position " << position <<     
".\n"; 
            return; 
 
40 
 
        } 
 
        Node* temp = head; 
        for (int i = 1; i < position - 1 && temp != nullptr; i++) 
            temp = temp->next; 
 
        if (temp == nullptr) { 
            cout << "Position out of range. Cannot insert " << value << 
".\n"; 
            return; 
        } 
 
        newNode->next = temp->next; 
        temp->next = newNode; 
 
        cout << value << " inserted at position " << position << ".\n"; 
    } 
 
    // Display linked list 
    void display() { 
        if (head == nullptr) { 
            cout << "List is empty.\n"; 
            return; 
        } 
 
        cout << "Linked List: "; 
        Node* temp = head; 
        while (temp != nullptr) { 
            cout << temp->data << " "; 
            temp = temp->next; 
        } 
cout << "\n"; 
} 
}; 
int main() { 
    LinkedList list; 
    // Predefined insertions 
    list.insertAtBeginning(30); 
    list.insertAtBeginning(20); 
    list.insertAtBeginning(10); 
    list.display(); 
    list.insertAtEnd(40); 
    list.insertAtEnd(50); 
    list.display(); 
    list.insertAtPosition(25, 3); 
    list.insertAtPosition(35, 6); 
    list.insertAtPosition(5, 1);   // Also works for beginning 
    list.display(); 
    return 0; 
} 
