/// WAP in c to convert uppercase to lowercase letter with use Tolower
#include<stdio.h>
int main()
{
    char upper,lower;
    printf("Enter the uppercase letter:");
    scanf("%c",&upper);
    lower=tolower(upper);
    printf("The lowercase letter :%c",lower);
    return 0;
}
// Enter the uppercase letter:D
// The lowercase letter :d