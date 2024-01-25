#include<stdio.h>

// Function prototype
int fact(int n);

int main() {
    int a = 5;
    // Call the fact function with the correct argument
    int result = fact(a);
    printf("Factorial of %d is %d\n", a, result);
    return 0;
}

// Recursive function to calculate factorial
int fact(int n){
    if (n == 1 || n == 0) {
       return 1;
    } else {
        // Correct the recursive call by decrementing 'n'
        return n * fact(n - 1);
    }
}
