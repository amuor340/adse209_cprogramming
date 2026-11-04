
/* Write a C program called "big_and_small_of_3",
that accepts three numbers from the user and displays the largest and
smallest numbers. Use only comparison and ternary operators. */

#include <stdio.h>

int main()
{
    int num1, num2, num3, largest, smallest;

    printf("Please enter num1: ");
    scanf("%d", &num1);

    printf("Please enter num2: ");
    scanf("%d", &num2);

    printf("Please enter num3: ");
    scanf("%d", &num3);

    // Find the largest number using the ternary operator
    largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    // Find the smallest number using the ternary operator
    smallest = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);

    printf("\nThe largest number is: %d\n", largest);
    printf("The smallest number is: %d\n", smallest);

    return 0;
}
