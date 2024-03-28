//  21. Write a program in C to accept some numbers from the user till the user wants and find out how many of them are (i) positives, (ii) negatives, (iii) even, and (iv) odd using do
//      while loop.
#include <stdio.h>

int main()
{
    int number, positives = 0, negatives = 0, evens = 0, odds = 0;
    char choice;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number > 0)
        {
            positives++;
        }
        else if (number < 0)
        {
            negatives++;
        }
        if (number % 2 == 0)
        {
            evens++;
        }
        else
        {
            odds++;
        }

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice); 

    } while (choice == 'y' || choice == 'Y');

    printf("\nResults:\n");
    printf("Positive numbers: %d\n", positives);
    printf("Negative numbers: %d\n", negatives);
    printf("Even numbers: %d\n", evens);
    printf("Odd numbers: %d\n", odds);

    return 0;
}
// Enter a number: 2
// Do you want to enter another number? (y/n): y
// Enter a number: 3
// Do you want to enter another number? (y/n): y
// Enter a number: -6
// Do you want to enter another number? (y/n): y
// Enter a number: 29
// Do you want to enter another number? (y/n): n

// Results:
// Positive numbers: 3
// Negative numbers: 1
// Even numbers: 2
// Odd numbers: 2