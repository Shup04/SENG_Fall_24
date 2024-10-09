#include <iostream>

// Multiplies n to the factorial of n-1, and it finds the factorial of n-1 via recursion.
// Since it recursively cals itself n times, time complexity is O(n).
int factorial (int n) {
    if (n<=1) return n;
    return n * factorial(n-1);
};

// Runs a for loop from n down to 1, multiplying itselv by i for each loop.
// Since its a for loop, the time complexity would also be just O(n).
int factorialLoop (int n) {
    if (n<=1) return n;
    int fact = 1;
    for (int i=n; i>0; i--) {
        fact *= i;
    }
    return fact;
};

int main() {
    std::cout << factorial(4) << std::endl;
    std::cout << factorial(6) << std::endl;

    std::cout << factorialLoop(4) << std::endl;
    std::cout << factorialLoop(6) << std::endl;
    return 0;
}