
#include <stdio.h>

int main()
{
    // Declare quantities
    int chips_quantity = 2;
    int burger_quantity = 1;
    int juice_quantity = 3;

    // Declare unit prices
    float chips_price = 150.00;
    float burger_price = 350.00;
    float juice_price = 100.00;

    // Calculate total cost of each item
    float chips_total = chips_quantity * chips_price;
    float burger_total = burger_quantity * burger_price;
    float juice_total = juice_quantity * juice_price;

    // Calculate grand total
    float grand_total = chips_total + burger_total + juice_total;

    // Display restaurant bill
    printf("\n==========RESTAURANT BILL=====================\n");
    printf("=================================================\n");

    printf("%-15s %10s %12s %12s\n",
           "Item", "Quantity", "Unit Price", "Total Price");

    printf("===================================================\n");

    printf("%-15s %10d %12.2f %12.2f\n",
           "Chips", chips_quantity, chips_price, chips_total);

    printf("%-15s %10d %12.2f %12.2f\n",
           "Beef burger", burger_quantity, burger_price, burger_total);

    printf("%-15s %10d %12.2f %12.2f\n",
           "Fresh juice", juice_quantity, juice_price, juice_total);

    printf("======================================================\n");

    printf("%-39s %12.2f\n", "GRAND TOTAL:", grand_total);

    printf("=======================================================\n");

    return 0;
}
