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
// Insert at end (helper for demo) 
void insertAtEnd(int value) { 
        Node* newNode = new Node(value); 
        if (head == nullptr) { 
            head = newNode; 
            return; 
        } 
 
        Node* temp = head; 
        while (temp->next != nullptr) 
            temp = temp->next; 
        temp->next = newNode; 
    } 
 
    // DELETE by VALUE 
    void deleteByValue(int value) { 
        if (head == nullptr) { 
            cout << "List is empty.\n"; 
            return; 
        } 
 
        // If node to delete is head 
        if (head->data == value) { 
            Node* temp = head; 
            head = head->next; 
            delete temp; 
            cout << "Node with value " << value << " deleted.\n"; 
            return; 
        } 
 
        Node* temp = head; 
        while (temp->next != nullptr && temp->next->data != value) 
            temp = temp->next; 
 
45 
 
 
        if (temp->next == nullptr) { 
            cout << "Value " << value << " not found.\n"; 
            return; 
        } 
 
        Node* delNode = temp->next; 
        temp->next = delNode->next; 
        delete delNode; 
 
        cout << "Node with value " << value << " deleted.\n"; 
    } 
 
    // DELETE by POSITION (1-based indexing) 
    void deleteByPosition(int position) { 
        if (head == nullptr || position <= 0) { 
            cout << "Invalid position.\n"; 
            return; 
        } 
 
        // Deleting head node 
        if (position == 1) { 
            Node* temp = head; 
            head = head->next; 
            delete temp; 
            cout << "Node at position " << position << " deleted.\n"; 
            return; 
        } 
 
        Node* temp = head; 
        for (int i = 1; i < position - 1 && temp != nullptr; i++) 
            temp = temp->next; 
 
        if (temp == nullptr || temp->next == nullptr) { 
            cout << "Position " << position << " out of range.\n"; 
            return; 
        } 
 
        Node* delNode = temp->next; 
        temp->next = delNode->next; 
        delete delNode; 
 
        cout << "Node at position " << position << " deleted.\n"; 
    } 
 
    // Display list 
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
// Predefined List 
list.insertAtEnd(10); 
list.insertAtEnd(20); 
list.insertAtEnd(30); 
list.insertAtEnd(40); 
list.insertAtEnd(50); 
list.display(); 
// Delete by Value 
list.deleteByValue(30); 
list.display(); 
list.deleteByValue(10); 
list.display(); 
// Delete by Position 
list.deleteByPosition(2); 
list.display(); 
list.deleteByPosition(10); // out of range example 
list.display(); 
return 0; 
} 
