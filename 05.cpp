//Bubble Sort with Pass Display
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

    cout << "\n--- Bubble Sort Process ---\n";

    for (int i = 0; i < n - 1; i++) {
        cout << "Pass " << i + 1 << ": ";

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

        // display array after each pass
        for (int k = 0; k < n; k++)
            cout << arr[k] << " ";
        cout << endl;
    }

    cout << "\nSorted Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
