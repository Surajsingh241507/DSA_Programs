//Author – Suraj Singh - 241507 
#include <iostream> 
using namespace std; 
class BinaryTree { 
public: 
    int tree[100]; 
    int n; 
    BinaryTree() { 
        n = 7;  // number of nodes 
        int arr[8] = { -1, 10, 20, 30, 40, 50, 60, 70 }; 
 
        for (int i = 1; i <= n; i++) { 
            tree[i] = arr[i]; 
        } 
    } 
    void display() { 
        cout << "Binary tree in array form: "; 
        for (int i = 1; i <= n; i++) { 
            cout << tree[i] << " "; 
        } 
        cout << endl; 
    } 
}; 
int main() { 
    BinaryTree bt; 
    bt.display(); 
    return 0; 
}
