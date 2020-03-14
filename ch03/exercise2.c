/* Exercise 2

Write a program that ask you to enter an ASCII code value, such as 66, and then prints
the character having that ASCII code.

*/

#include <stdio.h>

int main(void)
{
    int input;

    printf("Please enter an ASCII code: ");
    scanf("%d", &input);
    printf("%d represents %c\n", input, input);

    return 0;  
}