//Fibonacci Series in C++
//Author – Suraj Singh - 241507
#include <iostream>
using namespace std;

int fib(int n) {
    if (n <= 1)
        return n;  
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Fibonacci Series up to " << n << " terms: ";

    for (int i = 0; i < n; i++) {
        cout << fib(i) << " ";
    }

    return 0;
}
