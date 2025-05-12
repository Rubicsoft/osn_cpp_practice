/*
    RECURSIVE FUNCTION
*/

#include <iostream>

#define FACTORIAL_CONSTANT 10


unsigned long recursiveFactorial(unsigned int n);
// unsigned long iterationFactorial(unsigned int n);



int main() {
    long factorialResult;

    factorialResult = recursiveFactorial(FACTORIAL_CONSTANT);


    std::cout << "RESULT : " << factorialResult << std::endl;

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

// Factorial function using iteration
// unsigned long iterationFactorial(unsigned int n) {
//     unsigned long result;

//     while (result )
//     {
//         /* code */
//     }
    
// }