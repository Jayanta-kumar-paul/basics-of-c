// 22. Write a program to print the following patterns. The user will provide the number of lines(n). Sample pattern for n=3
 #include <stdio.h>
 
 int main ()
 {
    int num,count=1;

    printf("Enter the positive number : ");
    scanf("%d",&num);
    
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=num;j++)
        {
            printf("%2d",count);
            count++;
        }
        printf("\n");
   }

   return 0;
 }
//  Enter the positive number : 3
//  1 2 3
//  4 5 6
//  7 8 9