
#include <stdio.h>

// main function provides the entry point to the program/application
// Program that accepts an amount of money and the prices of two products
// to calculate the change the user gets after purchasing the products.

int main()
{
    int amount, prod1, prod2, change;
    //entering amount for first product
    printf("Please Enter amount for prod1: Ksh. ");
    scanf("%d", &prod1);

    //entering amount for seond product
    printf("Please Enter amount for prod2: Ksh. ");
    scanf("%d", &prod2);

    //entering amount
    printf("Please Enter amount: Ksh. ");
    scanf("%d", &amount);

    //calculating the change
    change = amount - (prod1 + prod2);

    printf("Your Change is: Ksh. %d\n", change);

    return 0;
}
