//  30. Write a C program that swaps the values of two integers using a function with the call by reference.
#include <stdio.h>

// Function to swap two integers using call by reference
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1, num2;

    // Input two integers
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Call the swap function
    swap(&num1, &num2);

    // Print the swapped values
    printf("After swapping:\n");
    printf("First integer: %d\n", num1);
    printf("Second integer: %d\n", num2);

    return 0;
}
// Enter the first integer: 10
// Enter the second integer: 20
// After swapping:
// First integer: 20
// Second integer: 10
