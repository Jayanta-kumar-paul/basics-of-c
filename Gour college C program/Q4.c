#include <stdio.h>
int main()
{
    float length, breadth;
    float area, perimeter;
    printf("Enter the length and breadth in rectangle:");
    scanf("%f%f", &length, &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("The rectangle area is :%f\n", area);
    printf("The rectangle perimeter is :%f\n", perimeter);
    int radious;
    float circumference;
    printf("Enter the radious in circle :");
    scanf("%d", &radious);
    area = 3.14 * radious * radious;
    circumference = 2 * 3.14 * radious;
    printf("The circle area is :%f\n", area);
    printf("The circle circumference is :%f\n", circumference);
    return 0;
}
// Enter the length and breadth in rectangle:6
// 5
// The rectangle area is :30.000000
// The rectangle perimeter is :22.000000
// Enter the radious in circle :5
// The circle area is :78.500000
// The circle circumference is :31.400000