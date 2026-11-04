
#include <stdio.h>

int main()
{
    // Declare variables
    int number;
    int i;

    // Ask the user to enter a number
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check whether the number is positive
    if (number <= 0)
    {
        printf("Error! Please enter a positive integer.\n");
    }
    else
    {
        printf("\nMultiplication table for %d\n", number);
        printf("--------------------------\n");

        // Generate multiplication table
        for (i = 1; i <= 12; i++)
        {
            printf("%d x %2d = %d\n", number, i, number * i);
        }
    }

    return 0;
}
