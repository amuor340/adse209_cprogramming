// C program to display " Hello World" on the console
// Pre-processor directive

#include <stdio.h>
// main function provided the entry point to the program/application

int main()
{
    //variables to be used in the program
     int classAttended, totalClass;
     printf("STUDENT EXAMINATION ELIGIBILITY\n");
     printf("===============================\n");

     //Prompt the user for the total number of lasses held for the module/subject
     printf("\nPlease enter the total number of the classes for the PPT module:\n");
     scanf("%d", &classAttended);

     //calculating and displaying the student's attendance percentage
     float attendancePercentage =(float)classAttended/totalClass * 100;
     printf("\nAttendance Percentage is: %2f%%\n",attendancePercentage);

     //Check whether the student qualify to sit the exam
     if (attendancePercentage >= 75)
     {
         printf("Eligibility status : Qualify\n");
         printf("The student may sit the PPT exams\n");
     }

    return 0;
}
