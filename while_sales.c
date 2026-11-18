
/* C program that accepts the value of each sales in a shop and calculate the total sales using a while loop.
 The shop attendant enter zero '0' when there are no more customers to serve. */

#include <stdio.h>

int main()
{
    //Variables to be used in the program.
    float purhaseAmount, totalSales = 0.0;
    int customerCount = 0;

    printf("\nADSE@)@^ DAILY SALES RECODE");
    printf("\n---------------------------");

    //Request/prompt the user to first purchase amount
    printf("\nPlease enter purchase amount (0 to finish): Kes> ");
    scanf("%f", &purhaseAmount);

    //continue accepting purchases until zero is enter
    while (purhaseAmount != 0)
    {
        //checking whether the purchase amount is valid
        if (purhaseAmount > 0)
        {
            //adding the purchase amount to total sales amount
            totalSales += purhaseAmount;

            //increasing the number of customers served
            customerCount++;

            printf("\nPurchase recorded successfully");
        }
        else
        {
            printf("\nInvalid purchase amount. Please try again!");
        }

        //Request/prompt the user for the next purchase amount
        printf("\nPlease enter purchase amount (0 to finish): Kes. ");
        scanf("%f", &purhaseAmount);
    }

    //display the sale summary
    printf("\nADSE2026 DAILY SALES RECORD");
    printf("\n---------------------------");

    printf("\nCustomers served: %d", customerCount);
    printf("\nTotal Amount: Kes %.2f", totalSales);

    return 0;
}
