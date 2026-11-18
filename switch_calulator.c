// C program to display " Hello World" on the console
// Pre-processor directive

#include <stdio.h>
// main function provided the entry point to the program/application

int main()
{
    //variables to be used in the program
     int choice;
     float num1, num2, result;

    //display the calculator menu
    printf("\nSIMPLE ARITHMETIC CALCULATOR");
    printf("\n----------------------------");

    printf("\n1. Addition");
    printf("\n2. Substraction");
    printf("\n3. Multipliation");
    printf("\n4. Division");

    //Prompt the user for their choice
    printf("\nPlease enter the desired calculation(1-4)\n.");
    scanf("%d", &choice);

    //validate the user's choice
    if(choice<1 || choice>4)
    {
        printf("\nInvalid Choice enter.\nPlease Choose from 1 - 4");
    }

    //Request the user for two numbers/operands
    printf("\nPlease enter the first number to be used in the calculation:\n");
    scanf("%f", &num1);
    printf("\nPlease enter the first number to be used in the calculation:\n");
    scanf("%f", &num2);

    //select an arithmetic operation using the 'switch_case' construct
    switch(choice)
    {
    //addition
    case 1:
        result = num1 + num2;
        printf("\n%2f + %2f\n", num1, num2, result);
        break;

    //substraction
    case 2:
        result = num1 - num2;
        printf("\n%2f - %2f\n", num1, num2, result);
        break;

    //multiplication
    case 3:
        result = num1 * num2;
        printf("\n%2f * %2f\n", num1, num2, result);
        break;

    //division
    case 4:
        if (num2==0)
        {
            printf("\nError. Division by zero is not allowed.");
        }
        result = num1 / num2;
        printf("\n%2f / %2f\n", num1, num2, result);
        break;
    }


    return 1;
}
