// 13. Write a program to read three integer values from the keyboard and display the output
//  stating that they are the sides of a right-angled triangle.
#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter first integer values: ");
    scanf("%d", &a);
     printf("Enter second integer values: ");
    scanf("%d", &b);
     printf("Enter third integer values: ");
    scanf("%d", &c);

    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
    {
        printf("\nThese values form the sides of a right-angled triangle.\n");
    }
    else
    {
        printf("These values do not form a right-angled triangle.\n");
    }
    return 0;
}
// Enter first integer values: 3
// Enter second integer values: 4
// Enter third integer values: 5

// These values form the sides of a right-angled triangle.

