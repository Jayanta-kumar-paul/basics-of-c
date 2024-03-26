//  4. The length & breadth of a rectangle and the radius of a circle are input through the
//  keyboard. Write a program to calculate the area & perimeter of the rectangle, and the
//  area & circumference of the circle.
#include <stdio.h>

int main()
{
    float length, breadth;
    float area, perimeter;

    printf("Enter the length in rectangle : ");
    scanf("%f", &length);
    printf("Enter the breadth in rectangle : ");
    scanf("%f", &breadth);
   
    area = length * breadth;
   
    perimeter = 2 * (length + breadth);
   
    printf("The rectangle area is :%f\n", area);
    printf("The rectangle perimeter is :%f\n", perimeter);
   
    int radious;
    float circumference;
   
    printf("\nEnter the radious in circle : ");
    scanf("%d", &radious);
   
    area = 3.14 * radious * radious;
   
    circumference = 2 * 3.14 * radious;
   
    printf("The circle area is :%f\n", area);
    printf("The circle circumference is :%f\n", circumference);
   
    return 0;
}
// Enter the length in rectangle:6
// Enter the breadth in rectanglr:5
// The rectangle area is :30.000000
// The rectangle perimeter is :22.000000

// Enter the radious in circle :5
// The circle area is :78.500000
// The circle circumference is :31.400000