// Write a c program to enter lowercase and convert uppercase//
#include <stdio.h>
int main()
{
    char lower, upper;
    printf("Enter the lowercase letter:");
    scanf("%c", &lower);
    upper = toupper(lower);
    printf("The uppercase letter :%c", upper);
    return 0;
}
// Enter the lowercase letter:a
// The uppercase letter :A