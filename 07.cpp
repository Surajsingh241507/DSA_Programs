//Author – Suraj Singh - 241507
#include <iostream> 
using namespace std; 
 
// Function to merge two halves 
void merge(int arr[], int left, int mid, int right) { 
    int n1 = mid - left + 1; 
    int n2 = right - mid; 
 
    int L[n1], R[n2]; 
 
    // Copy data 
    for (int i = 0; i < n1; i++) 
        L[i] = arr[left + i]; 
    for (int i = 0; i < n2; i++) 
        R[i] = arr[mid + 1 + i]; 
 
    int i = 0, j = 0, k = left; 
 
    // Merge back to array 
    while (i < n1 && j < n2) { 
        if (L[i] <= R[j]) { 
            arr[k] = L[i]; 
            i++; 
        } else { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++;  
    } 
 
    // Copy remaining elements 
    while (i < n1) { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
    while (j < n2) { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
 
// Recursive Merge Sort 
void mergeSort(int arr[], int left, int right) { 
    if (left < right) { 
        int mid = (left + right) / 2; 
 
        mergeSort(arr, left, mid);        // Sort left half 
        mergeSort(arr, mid + 1, right);   // Sort right half 
        merge(arr, left, mid, right);     // Merge them 
    } 
} 
 
int main() { 
    int n, arr[100]; 
 
    cout << "Enter number of elements: "; 
cin >> n; 
cout << "Enter " << n << " elements:\n"; 
for (int i = 0; i < n; i++) 
cin >> arr[i]; 
mergeSort(arr, 0, n - 1); 
cout << "\nSorted array:\n"; 
for (int i = 0; i < n; i++) 
cout << arr[i] << " "; 
cout << endl; 
return 0; 
} 
