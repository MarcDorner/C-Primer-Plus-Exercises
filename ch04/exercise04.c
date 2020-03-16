/* Exercise 4

Write a program that requests your height in inches and your name, and
then displays the information in the following form:

Dabney, you are 6.208 feet tall

Use type float, and use / for division. If you prefer request the height in
centimeters and display it in meters.

*/

#include <stdio.h>

int main(void)
{
    const int cm_per_meter = 100;
    int height = 0;
    char first_name[25];

    printf("Enter your first name: ");
    scanf("%s", first_name);
    printf("Enter your height in cm: ");
    scanf("%d", &height);
    printf("%s, you are %.2f meters tall.\n", first_name, (float)height/cm_per_meter);

    return 0;
}