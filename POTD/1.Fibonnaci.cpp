#include <iostream>

using namespace std;

int nthFibonacci(int n) {
    const int MOD = 1000000007;
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0;
    int b = 1;
    int fib = a + b;

    for (int i = 2; i <= n; i++) {
        fib = (a + b) % MOD;
        a = b;
        b = fib;
    }

    return fib;
}

int main() {
    int n = 10; // Change this to the desired value of n

    int result = nthFibonacci(n);

    cout << "The " << n << "th Fibonacci number is: " << result << endl;

    return 0;
}
