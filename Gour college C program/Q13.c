#include <stdio.h>

int main()
{
    int a, b, c;

    // Input three integer values
    printf("Enter three integer values: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check if they satisfy the Pythagorean theorem
    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
    {
        printf("These values form the sides of a right-angled triangle.\n");
    }
    else
    {
        printf("These values do not form a right-angled triangle.\n");
    }
    return 0;
}
// Enter three integer values: 3
// 4
// 5
// These values form the sides of a right-angled triangle.
