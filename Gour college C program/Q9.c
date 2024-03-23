#include <stdio.h>
int main() 
{
    int a, b;
    printf("Please Enter Two different values:\n");
    scanf("%d %d", &a, &b);

    if (a > b) 
    {
        printf("%d is Largest\n", a);
    } 
    else if (b > a) 
    {
        printf("%d is Largest\n", b);
    } 
    else 
    {
        printf("Both are Equal\n");
    }
    return 0;
}
// Please Enter Two different values:
// 30
// 50
// 50 is Largest
// Please Enter Two different values:
// 50
// 50
// Both are Equal