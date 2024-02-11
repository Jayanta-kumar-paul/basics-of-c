#include <stdio.h>
int main ()
{
    int size;
    printf("Enter the size of pattern :");
    scanf("%d",&size);
    for(int i=0;i<=size;i++)
    {
        for(int j=0;j<size-i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// Enter the size of pattern :5
// * * * * * 
// * * * * 
// * * * 
// * * 
// *