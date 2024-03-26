// 6. Write a program to swap the values of two variables without using any third variable
#include<stdio.h>

int main()
{
    int a,b;

    printf("Enter the two integers :");
    scanf("%d%d",&a,&b);

    printf("Before swapping value a=%d,b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;

    printf("After swapping value a=%d,b=%d",a,b);

    return 0;
}
// Enter the two integers :10
// 30
// Before swapping value a=10,b=30
// After swapping value a=30,b=10