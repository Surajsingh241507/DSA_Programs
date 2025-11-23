//Factorial using Recursion in C++
//Author – Suraj Singh - 241507
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;                // base case
    return n * factorial(n - 1); // recursive call
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Factorial of " << n << " = " << factorial(n) << endl;

    return 0;
}
