//  29. Write a recursive C function that calculates the nth Fibonacci number, where the Fibonacci sequence is defined as:
//        F(n) = F(n-1) + F(n-2) for n > 1 and F(0) = 0, F(1) = 1.
#include <stdio.h>

// Recursive function to compute the nth Fibonacci number
int fibonacci(int n)
{
    if (n <= 1)
    {
        return n; // Base case: F(0) = 0, F(1) = 1
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
    }
}

int main()
{
    int n;

    // Input the value of n
    printf("Enter a non-negative integer (n): ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Please enter a non-negative integer.\n");
    }
    else
    {
        int result = fibonacci(n);
        printf("Fibonacci number at position %d: %d\n", n, result);
    }

    return 0;
}
// Enter a non-negative integer (n): 9
// Fibonacci number at position 9: 34
