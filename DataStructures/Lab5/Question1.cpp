#include <iostream>

// Normal fibonacci sequence using recursion.
// Sums up the fin of n-1 and n-2, and end the recursion if n reaches 0.
// Since i called fib 2 times in one fib function, the time complecity would be O(2^n).
int Fib(int n) {
    if (n <= 1) return n;
    return Fib(n-1) + Fib(n-2);
};

// For loop from 2 to n that adds the past 2.
// I gave it the first 2 values, so the loop starts at 2 instead of 0.
// Time complexity would be O(n) because its a for loop.
int FibLoop(int n) {
    int fib1 = 1;
    int fib2 = 1;

    for (int i=2; i<n; i++) {
        int temp = fib2;
        fib2 = fib1 + fib2;
        fib1 = temp;
    }
    return fib2;
}

int main() {
    int n = 9;
    std::cout << Fib(n);
    std::cout << FibLoop(n);
    return 0;
}