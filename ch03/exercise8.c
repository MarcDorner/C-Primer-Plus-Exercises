/* Exercise 8

In the U.S. system of volume measurements, a pint is 2 cups, a cup is 8 ounces, an
ounce is 2 tablespoons, and a tablespoon is 3 teaspoons. Write a program that requests
a volume in cups and that displays the equivalent volumes in pints, ounces, tablespoons,
and teaspoons. Why does a floating-point type make more sense for this application than
an integer type?

*/

#include <stdio.h>

int main(void)
{
    float cups;

    printf("Enter your volume in cups: ");
    scanf("%f", &cups);
    printf("%f cups equals\n", cups);
    printf("\t%f pints\n", cups/2);
    printf("\t%f ounces\n", cups*8);
    printf("\t%f tablespoons\n", (cups*8)*2);
    printf("\t%f teaspoons\n", (cups*8)*2*3);
    
    return 0;
}