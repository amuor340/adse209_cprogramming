
/* C program that accepts the value of each sales in a shop and calculate the total sales using a while loop.
 The shop attendant enter zero '0' when there are no more customers to serve. */

#include <stdio.h>

int main()
{
    //Variables to be used in the program.
    int choice, quantity;
    float itemPrice, totalBill = 0.0;
    char continueOrdeing;

    do
    {
        //displaying the restaurant Menu
        printf("\nADSE2026 RESTAURANT SYSTEM");
        printf("\n--------------------------");

        printf("\n1. Tea     - Kes. 50");
        printf("\n2. Rolex   - Kes. 80");
        printf("\n3. Coffee  - Kes. 100");
        printf("\n4. Smocha  - Kes. 150");
        printf("\n5. Juice   - Kes. 100");

        // Request the user to enter their choice
        printf("\nPlease enter your choice (1-5):\n");
        scanf("%d", &choice);

        // Determine the price of the selected menu item
        switch(choice)
        {
            case 1:
                itemPrice = 50;
                printf("\nYou selected tea.");
                break;

            case 2:
                itemPrice = 80;
                printf("\nYou selected rolex.");
                break;

            case 3:
                itemPrice = 100;
                printf("\nYou selected coffee.");
                break;

            case 4:
                itemPrice = 150;
                printf("\nYou selected smocha.");
                break;

            case 5:
                itemPrice = 100;
                printf("\nYou selected juice.");
                break;

            default:
                itemPrice = 0;
                printf("\nInvalid Menu Selection.\n.");
        }

        //process the order only for the desire quantity
        if(itemPrice > 0)
        {
            //request the user for desire quantity
            printf("\nEnter quantity you desire.\n");
            scanf("%d", &quantity);

            if(quantity > 0)
            {
                //add the cost of the order to the total bill
                totalBill += (itemPrice * quantity);
                printf("\nItem added to you order");
            }
            else
            {
                printf("\nInvalid Quantity.No item was added");
            }
        }

        //Ask the customer whether they'd like to order another item
        printf("\nWould you like to order Another item (Y/N)");
        scanf(" %c", &continueOrdeing);

    } while(continueOrdeing == 'Y' || continueOrdeing == 'y');

    // Display the final bill
    printf("\nFINAL BILL\n");
    printf("----------------\n");
    printf("Total amount payable: KSh %.2f\n", totalBill);

    printf("\nThank you for dining with us!\n");

    return 0;
}
