
#include <stdio.h>

/* This program displays arithmetic operators in C. */

// Pre-processor
int main()
{
    // Variables to be used in the program
    int firstNum = 8, secondNum = 5;

    // Display the values of the above
    printf("Values of 'firstNum' and 'secondNum' are %d and %d respectively\n",
           firstNum, secondNum);

    printf("%15s: %d + %d = %d\n", "Addition", firstNum, secondNum, firstNum + secondNum);
    printf("%15s: %d * %d = %d\n", "Multiplication", firstNum, secondNum, firstNum * secondNum);
    printf("%15s: %d - %d = %d\n", "Subtraction", firstNum, secondNum, firstNum - secondNum);
    printf("%15s: %d / %d = %d\n", "Division", firstNum, secondNum, firstNum / secondNum);
    printf("%15s: %d %% %d = %d\n", "Modulus", firstNum, secondNum, firstNum % secondNum);

    return 0;
}
