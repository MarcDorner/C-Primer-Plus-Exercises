/* Exercise 7

Write a program that sets a type double variable to 1.0/3.0 and a type float
variable to 1.0/3.0. Display each result three times -- once showing four
digits to the right of the decimal, once showing 12 digits to the right of the
decimal, and once showing 16 digits to the right of the decimal. Also have the
program include float.h and display the values of FLT_DIG and DBL_DIG. Are the
displayed values of 1.0/3.0 consistent with these values?

*/

#include <stdio.h>
#include <float.h>

int main(void)
{
    double db_num = 1.0/3.0;
    float flt_num = 1.0/3.0;

    printf("DBL_DIG := %d, FLT_DIG := %d\n", DBL_DIG, FLT_DIG);

    printf("Double number shows:\n");
    printf("\t%0.4f\n", db_num);
    printf("\t%0.12f\n", db_num);
    printf("\t%0.16f\n", db_num);

    printf("Float number shows:\n");
    printf("\t%0.4f\n", flt_num);
    printf("\t%0.12f\n", flt_num);
    printf("\t%0.16f\n", flt_num);

    return 0;
}