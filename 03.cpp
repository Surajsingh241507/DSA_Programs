//Array Traversal, Insertion and Deletion in C++
//Author – Suraj Singh - 241507
#include <iostream>
using namespace std;

int main() {
    int arr[100], n, pos, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // -------- Traversing --------
    cout << "\nArray elements are:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // -------- Insertion --------
    cout << "\nEnter position to insert (0 to " << n << "): ";
    cin >> pos;
    cout << "Enter value to insert: ";
    cin >> value;

    for (int i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = value;
    n++;

    cout << "\nArray after insertion:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // -------- Deletion --------
    cout << "\nEnter position to delete (0 to " << n - 1 << "): ";
    cin >> pos;

    for (int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;

    cout << "\nArray after deletion:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
