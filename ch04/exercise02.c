/*

Write a program that requests your first name and does the following with it:

a. Prints it enclosed in double quotation marks
b. Prints it in a field 20 characters wide, with the whole field in quotes
   and the name at the right end of the field
c. Prints ut at the left end of a field 20 characters wide, with the whole field
   enclosed in quotes.
d. Prints it in a field three characters wider than the name.

*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char first_name[25];

    printf("Enter your first name: ");
    scanf("%s", first_name);

    printf("\"%s\"\n", first_name);
    printf("\"%20s\"\n", first_name);
    printf("\"%-20s\"\n", first_name);
    printf("\"%*s\"\n", (int)strlen(first_name)+3, first_name);

    return 0;
}