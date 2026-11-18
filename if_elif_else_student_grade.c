// C program to display " Hello World" on the console
// Pre-processor directive

#include <stdio.h>
// main function provided the entry point to the program/application

int main()
{
    //variables to be used in the program
     unsigned short score;


     //Prompt and read in the score from the user
     printf("\nPlease enter your score in the exam:\n");
     scanf("%u", &score);

     //validate score
     if (score < 0|| score > 100)
     {
         printf("Invalid score Entered.\nKindly enter a sore between 0-100");
     }

     //grade 'A'
     else if(score>=70)
     {
         printf("\nStudent got Grade A");
         printf("\nPerformance: Excellence.\n");
     }
     //grade 'B'
     else if(score>=60)
     {
         printf("\nStudent got Grade B");
         printf("\nPerformance: Very Good.\n");
     }
     //grade 'C'
     else if(score>=50)
     {
         printf("\nStudent got Grade C");
         printf("\nPerformance: Good.\n");
     }
     //grade 'D'
     else if(score>=40)
     {
         printf("\nStudent got Grade D");
         printf("\nPerformance: Fair.\n");
     }
     //grade 'E'
     else
     {
         printf("\nStudent got Grade E");
         printf("\nPerformance: Fail.\n");
     }


    return 1;
}
