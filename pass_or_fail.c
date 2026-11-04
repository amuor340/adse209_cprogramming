
#include <stdio.h>

int main()
{
    int score;

    // Prompt the user to enter a score
    printf("Please enter your score:\n");
    scanf("%d", &score);

    // Reject invalid scores
    if (score < 0 || score > 100)
        printf("\nPlease enter a number between 0 and 100.\n");

    // Check if the user passed
    else if (score >= 55)
        printf("\n%d You Passed", score);

    // else, the user failed
    else
        printf("\n%d You Failed", score);

    return 0;
}
