// 32. Write a C program that allows the user to input twenty numbers into an array duringruntime. The user also inputs a number to be searched. Implement a program to
//    determine if the provided number is present in the array. If it is, display the number of times it appears in the array.
#include <stdio.h>

int main()
{
    int arr[20];
    int n, searchNumber, count = 0;

    // Input twenty numbers into the array
    printf("Enter twenty numbers:\n");
    for (int i = 0; i < 20; ++i)
    {
        scanf("%d", &arr[i]);
    }

    // Input the number to be searched
    printf("Enter the number to search: ");
    scanf("%d", &searchNumber);

    // Check if the number is present and count its occurrences
    for (int i = 0; i < 20; ++i)
    {
        if (arr[i] == searchNumber)
        {
            count++;
        }
    }

    // Display the results
    if (count > 0)
    {
        printf("%d is present in the array %d time(s).\n", searchNumber, count);
    }
    else
    {
        printf("%d is not present in the array.\n", searchNumber);
    }

    return 0;
}
