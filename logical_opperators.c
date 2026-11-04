
#include <stdio.h>

/* This program demonstrates the various comparison and logical operators in C
   to compare two integers and display results. */

// Pre-processor
int main()
{
    // Variables to be used in the program
    int firstNum = 10, secondNum = 7;

    // Display the values of the above variables
    printf("Values of 'firstNum' and 'secondNum' are %d and %d respectively.",
           firstNum, secondNum);

    // Demonstrate the various comparison operators
    printf("\nCOMPARISON OPERATORS");
    printf("\n====================================");

    // Equal to '==' operator
    printf("\n%d equal to %d? %d", firstNum, secondNum, firstNum == secondNum);

    // Not Equal to '!=' operator
    printf("\n%d Not equal to %d? %d", firstNum, secondNum, firstNum != secondNum);

    // Greater than '>' operator
    printf("\n%d Greater than %d? %d", firstNum, secondNum, firstNum > secondNum);

    // Greater than or Equal to '>=' operator
    printf("\n%d Greater than or Equal to %d? %d", firstNum, secondNum, firstNum >= secondNum);

    // Less than '<' operator
    printf("\n%d Less than %d? %d", firstNum, secondNum, firstNum < secondNum);

    // Less than or Equal to '<=' operator
    printf("\n%d Less than or Equal to %d? %d", firstNum, secondNum, firstNum <= secondNum);

    printf("\n====================================");

    // Demonstrate the various logical operators
    printf("\nLOGICAL OPERATORS (&&, ||, !)");
    printf("\n====================================");

    // Logical AND: Evaluates to true when both expressions are true
    printf("\n(%d>%d && %d>0) = %d",
           firstNum, secondNum, firstNum,
           (firstNum > secondNum) && (firstNum > 0));

    // Logical OR: Evaluates to true when at least one expression is true
    printf("\n(%d<%d || %d>0) = %d",
           firstNum, secondNum, firstNum,
           (firstNum < secondNum) || (firstNum > 0));

    // Logical NOT: Reverses the logical result
    printf("\n!(%d>%d) = %d",
           firstNum, secondNum,
           !(firstNum > secondNum));

    printf("\n====================================\n");

    return 0;
}
