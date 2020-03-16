/* Exercise 8

Write a program that asks the user to enter the number of miles traveled and the
number of gallons of gasoline consumed. It should then calculate and display the
miles-per-gallon value, showing one place to the right of the decimal. Next,
using the fact that one gallon is about 3.785 liters and one mile is about
1.609 kilometers, it should convert the mile-per-gallon value to a liters-per-
100-km value, the usual European way of expressing fuel consumption, and display
the result, showing one place to the right of the decimal. Note that the U.S.
scheme measures the distance traveled per amount of fuel (higher is better),
whereas the European scheme measures the amount of fuel per distance (lower is
better). Use symbolic constants (using const or #define) for the two conversion
factors.

*/

#include <stdio.h>

#define LITERS_PER_GALLON 3.785
#define KM_PER_MILE 1.609

int main(void)
{
    float gallons_used = 0;
    float miles_travelled = 0;
    float mpg = 0;
    float liter_per_100km = 0;

    printf("Enter your traveled miles and consumed gallons: ");
    scanf("%f %f", &miles_travelled, &gallons_used);
    
    mpg = miles_travelled/gallons_used;
    liter_per_100km = 100. / (mpg * KM_PER_MILE/LITERS_PER_GALLON);
    
    printf("Miles-per-gallon value: %.1f\n", mpg);
    printf("Liters-per-100-km value: %0.1f\n", liter_per_100km);

    return 0;
}