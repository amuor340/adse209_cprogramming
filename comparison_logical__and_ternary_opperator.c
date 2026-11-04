
#include <stdio.h>

/* This program demonstrates the various comparison and logical operators in C
   to compare two integers and display results.
   NB: The ternary operator (?:) will display True or False.
*/

// Pre-processor
int main()
{
    // Variables to be used in the program
    int firstNum = 10, secondNum = 7;

    // Display the values of the above variables
    printf("Values of 'firstNum' and 'secondNum' are %d and %d respectively.", firstNum, secondNum);


    // Demonstrate the various comparison operators
    printf("\nCOMPARISON OPERATORS");
    printf("\n====================================");

    // Equal to '==' operator
    printf("\n%d equal to %d? %s", firstNum, secondNum,(firstNum == secondNum) ? "True" : "False");

    // Not Equal to '!=' operator
    printf("\n%d Not equal to %d? %s", firstNum, secondNum,(firstNum != secondNum) ? "True" : "False");

    // Greater than '>' operator
    printf("\n%d Greater than %d? %s", firstNum, secondNum,(firstNum > secondNum) ? "True" : "False");

    // Greater than or Equal to '>=' operator
    printf("\n%d Greater than or Equal to %d? %s", firstNum, secondNum,(firstNum >= secondNum) ? "True" : "False");

    // Less than '<' operator
    printf("\n%d Less than %d? %s", firstNum, secondNum,(firstNum < secondNum) ? "True" : "False");

    // Less than or Equal to '<=' operator
    printf("\n%d Less than or Equal to %d? %s", firstNum, secondNum,(firstNum <= secondNum) ? "True" : "False");

    printf("\n====================================");

    // Demonstrate the various logical operators
    printf("\nLOGICAL OPERATORS (&&, ||, !)");
    printf("\n====================================");

    // Logical AND: Evaluates to true when both expressions are true
    printf("\n(%d>%d && %d>0) is %s",firstNum, secondNum, firstNum,((firstNum > secondNum)) ==1? "True" : "False");

    // Logical OR: Evaluates to true when at least one expression is true
    printf("\n(%d<%d || %d>0) is %s",firstNum, secondNum, firstNum,((firstNum < secondNum)) ==1? "True" : "False");

    // Logical NOT: Reverses the logical result
    printf("\n!(%d>%d) is %s",firstNum, secondNum,(!(firstNum > secondNum)) ==1? "True" : "False");

    printf("\n====================================\n");

    return 0;
}
