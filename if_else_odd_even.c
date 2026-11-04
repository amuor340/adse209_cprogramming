
/* This i a program demonstrate the "if" selection construct. It accepts a
 letter of the alphabet from the user and checks if it's a vowel */

#include <stdio.h>


int main()
{
     //character array to hold the user's name
     int num;

    // Prompt the whole number
    printf("Please enter the number i'll tell you whether it is even or odd:\n");
    scanf("%d", &num);


    //use else the "if....else" construct to determine the whether it is odd or even
    if(num % 2==1)
        printf("\n%d is an Odd Number", num);
    else
        printf("\n%d is an Even Number", num);



    return 0;
}
