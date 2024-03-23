#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the two integers :");
    scanf("%d%d",&x,&y);
    printf("Before swapping value x=%d,y=%d\n",x,y);
    z=x;
    x=y;
    y=z;
    printf("After swapping value x=%d,y=%d",x,y);
    return 0;
}
// Enter the two integers :10
// 30
// Before swapping value x=10,y=30
// After swapping value x=30,y=10