/* Exercise 6

The mass of a single molecule of water is about 3.0*10^-23 grams. A quart of waster is about
950 grams. Write a program that requests an amount of water, in quarts, and displays The
number of water molecules in that amount.

*/

#include <stdio.h>

int main(void)
{
    float quarts;
    float h2o_mass = 3.0e-23;
    float grams_h2o_per_quart = 950.;

    printf("Enter an amount of water in quarts: ");
    scanf("%f", &quarts);
    printf("%f quarts consists of %e molecules\n", quarts, (quarts*grams_h2o_per_quart)/h2o_mass);

    return 0;
}