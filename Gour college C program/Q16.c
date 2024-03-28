//16. Write a program to perform the basic calculator operations using switch case.
#include <stdio.h>

int main()
{
    int a, b, choice;

    printf("Enter first integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);

    printf("Enter choice:\n 1.Addition:\n 2.Subtraction:\n 3.Multiplication:\n 4.Division:\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Result: %d", a + b);
        break;
    case 2:
        printf("Result: %d", a - b);
        break;
    case 3:
        printf("Result: %d", a * b);
        break;
    case 4:
        if (b != 0)
            printf("Result: %.2f", (float)a / b);
        else
            printf("Error! Division by zero not possible.");
        break;
    default:
        printf("Error! Invalid choice.");
        break;
    }

    return 0;
}
// Enter first integer: 20
// Enter second integer: 25
// Enter choice:
//  1.Addition:
//  2.Subtraction:
//  3.Multiplication:
//  4.Division:
//  2
// Result: -5