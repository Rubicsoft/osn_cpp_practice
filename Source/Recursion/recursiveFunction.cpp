/*
    RECURSIVE FUNCTION
    Date : May 12, 2025
*/

#include <iostream>


#define RECURSIVE 0
#define ITERATION 1

// CONFIG
#define FACTORIAL_CONSTANT 10
#define FACTORIAL_METHOD ITERATION


unsigned long recursiveFactorial(unsigned int n);
unsigned long iterationFactorial(unsigned int n);



int main() {
    long factorialResult;

    #if FACTORIAL_METHOD == RECURSIVE
    factorialResult = recursiveFactorial(FACTORIAL_CONSTANT);
    #elif FACTORIAL_METHOD == ITERATION
    factorialResult = iterationFactorial(FACTORIAL_CONSTANT);
    #endif


    std::cout << "FACTORIAL RESULT : " << factorialResult << std::endl;

    return 0;
}


// Factorial function using recursion
unsigned long recursiveFactorial(unsigned int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    
    std::cout << "FACTORIAL : " << n << std::endl;

    return n * recursiveFactorial(n - 1);
}

// Factorial function using iteration (Code from Deepseek)
// Please don't expect much :v
unsigned long iterationFactorial(unsigned int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    
    unsigned long a = 0, b = 1, c;
    for (int i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}