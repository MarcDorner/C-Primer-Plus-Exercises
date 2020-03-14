/* Exercise 7

There are 2.54 centimeter to the inch. Write a program that ask you to enter your height
in inches and then displays your height in centimeters. Or, if you prefer, ask for the
height in centimeter and convert that to inches.

*/

#include <stdio.h>

int main(void)
{
    int height;

    printf("Enter your height in cm: ");
    scanf("%d", &height);
    printf("%d cm equals %f inches\n", height, height/2.54);

    return 0;
}