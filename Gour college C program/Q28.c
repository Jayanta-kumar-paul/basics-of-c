// 28. Write a recursive C function that calculates the sum of the first N natural numbers.
#include <stdio.h>

// Recursive function to calculate the sum of the first N natural numbers
int sumOfNaturalNumbers(int N)
{
    if (N == 0)
    {
        return 0; // Base case: sum of 0 natural numbers is 0
    }
    else
    {
        return N + sumOfNaturalNumbers(N - 1); // Recursive case
    }
}

int main()
{
    int N;

    // Input the value of N
    printf("Enter a positive integer (N): ");
    scanf("%d", &N);

    if (N < 0)
    {
        printf("Please enter a positive integer.\n");
    }
    else
    {
        int result = sumOfNaturalNumbers(N);
        printf("Sum of the first %d natural numbers: %d\n", N, result);
    }

    return 0;
}
// Enter a positive integer (N): 4
// Sum of the first 4 natural numbers: 10
