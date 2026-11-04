
#include <stdio.h>

/* This program  accept the radius of the circle.
   NB: The ternary operator (?:) will display True or False.
*/
#define MYPI3.141593 //Define pi as a constant
#include <math.h>
// Pre-processor
int main()
{
    // Variables to be used in the program
     float radius, area, circumferance;

     // Prompt the user for the radius of the circle
     printf("Please enter the radius of the circle: ");
     scanf("%f", &radius);


     //Calculating the area  and circumference of the circle
     area = MYPI3 * pow(radius,2);
     circumferance = MYPI3 * (radius * 2);

     //displaying the circle's dimensions
     printf("\nCircle's Dimensions");
     printf("\n%-13s: %6.2f cm", "Radius", radius);
     printf("\n%-13s: %6.2f cm²", "Area", area);
     printf("\n%-13s: %6.2f cm", "Circumference", circumferance);


    return 0;
}
