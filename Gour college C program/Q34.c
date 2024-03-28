// 34. Write a program to get the smallest and largest number from a list of numbers.
#include <stdio.h>

int main()
{
    int n, num, smallest, largest;

    // Input the number of elements in the list
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input the first number
    printf("Enter number 1: ");
    scanf("%d", &num);
    smallest = largest = num; // Initialize smallest and largest with the first number

    // Input the remaining numbers
    for (int i = 2; i <= n; ++i)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        // Update smallest and largest
        if (num < smallest)
        {
            smallest = num;
        }
        if (num > largest)
        {
            largest = num;
        }
    }

    // Print the results
    printf("Smallest number: %d\n", smallest);
    printf("Largest number: %d\n", largest);

    return 0;
}

// Enter the number of elements: 10
// Enter number 1: 95
// Enter number 2: 68
// Enter number 3: 32
// Enter number 4: 15
// Enter number 5: 13
// Enter number 6: 25
// Enter number 7: 48
// Enter number 8: 57
// Enter number 9: 65
// Enter number 10: 31
// Smallest number: 13
// Largest number: 95