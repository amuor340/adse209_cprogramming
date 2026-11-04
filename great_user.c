
#include <stdio.h>

// This program asks the user for their name, reads the input from the console, then displays a greeting.

// Pre-processor
int main()
{
    // Character array to hold the user's name
    char name[80];

    // Prompting the user for their name
    printf("Please Enter your name:\n");

    // Read in the user's name
    fgets(name, sizeof(name), stdin);

    // Greet the user
    printf("\nHello \"%s\" from the C programming!\n", name);

    return 0;
}
