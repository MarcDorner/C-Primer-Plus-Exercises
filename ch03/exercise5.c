/* Exercise 5

There are approximately 3.156 x 10^7 seconds in a year. Write a program that requests
your age in years and then display the equivalent numbers of seconds.

*/

#include <stdio.h>

#define SECONDS_PER_YEAR 31560000

int main(void)
{
    int age;

    printf("Please enter your age in years: ");
    scanf("%d", &age);
    printf("%d years equals %u seconds\n", age, age*SECONDS_PER_YEAR);

    return 0;
}