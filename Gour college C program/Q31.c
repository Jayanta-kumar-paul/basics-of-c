// 31. Write a C program that initializes an array of 5 floats. Calculate and display the average of these floats.
#include <stdio.h>

int main()
{
    float numbers[5];
    float sum = 0.0;
    float average;

    // Input 5 float numbers
    printf("Enter 5 float numbers:\n");
    for (int i = 0; i < 5; ++i)
    {
        scanf("%f", &numbers[i]);
        sum += numbers[i];
    }

    // Calculate the average
    average = sum / 5;

    // Display the average
    printf("Average of the 5 float numbers: %.2f\n", average);

    return 0;
}

// Enter 5 float numbers:
// 12.3
// 15.6
// 14.3
// 18.5
// 39.4
// Average of the 5 float numbers: 20.02
