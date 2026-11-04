
/* This i a program demonstrate the "if" selection construct. It accepts a
 letter of the alphabet from the user and checks if it's a vowel */

#include <stdio.h>
#include <ctype.h> //include definations for the "tolowe()" functions

int main()
{
     //character array to hold the user's name
     char userLetter;

    // Prompt the user for a letter of the alphabet
    printf("Please enter the alphabet and i'll tell you whether it is vowel:\n");
    scanf("%c", &userLetter);

    //Convert the user's input to lowercase
    userLetter=tolower(userLetter);


    //Check whether the letter to lowercase
    if(userLetter=='a'|| userLetter=='e'||userLetter=='i' || userLetter=='o' || userLetter=='u')
        printf("\n%c is Vowel.", userLetter);

    return 0;
}
