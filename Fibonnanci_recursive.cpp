#include <iostream>
using namespace std;

// Recursive function to return nth Fibonacci number
int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cout << "Enter how many terms you want: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        cout << fib(i) << " ";
    }

    cout << endl;
    return 0;
}

