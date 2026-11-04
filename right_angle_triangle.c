
#include <stdio.h>

/* This program  accept the  base height of right angle triangle to calculate its perimeter and area.
   NB: The ternary operator (?:) will display True or False.
*/
#define MYPI3.141593 //Define pi as a constant
#include <math.h>
// Pre-processor
int main()
{
    // Variables to be used in the program
     float base,height, area, perimeter, hypotenuse;

     // Prompt the user for the radius of the circle
     printf("Please enter the radius of the triangle: ");
     scanf("%f", &base);

     printf("Please enter the radius of the triangle: ");
     scanf("%f", &height);

    //calulating the triangle hypotenuse
    hypotenuse = sqrt((pow(height,2), pow(base,2)));
    //hypotenuse = hypot(height, base);
    //printf("hypotenuse=%.2f\n", hypotenuse);

     //Calculating the area  and circumference of the circle
     area = .5 * base * height;
     perimeter = base + height + hypotenuse;

     //displaying the circle's dimensions
     printf("\nCircle's Dimensions");
     printf("\n%-13s: %6.2f cm", "Radius", base);
     printf("\n%-13s: %6.2f cm", "Radius", height);
     printf("\n%-13s: %6.2f cm", "Radius", hypotenuse);
     printf("\n%-13s: %6.2f cm²", "Area", area);
     printf("\n%-13s: %6.2f cm", "Circumference", perimeter);


    return 0;
}
