// Insertion Sort
//Author – Suraj Singh - 241507
#include <iostream> 
using namespace std; 
 
int main() { 
    int arr[100], n; 
 
    cout << "Enter number of elements: "; 
    cin >> n; 
 
    cout << "Enter " << n << " elements:\n"; 
    for (int i = 0; i < n; i++) 
        cin >> arr[i]; 
 
    for (int i = 1; i < n; i++) { 
        int key = arr[i]; 
        int j = i - 1; 
 
        // Move elements greater than key 
        while (j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j]; 
            j--; 
        } 
 
        arr[j + 1] = key; 
    } 
 
    cout << "\nSorted array:\n"; 
    for (int i = 0; i < n; i++) 
cout << arr[i] << " "; 
cout << endl; 
return 0; 
} 
