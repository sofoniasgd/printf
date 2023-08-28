#include "main.h"
#include<stdio.h>
/**
 * main - check the code for plain strings/NULL
 *
 * Return: Always 0.
 */
int main(void)
{
int count, count2;
char one, two, three;
one = 'a';
two = 'b';
three = 'C';
count = _printf("%c %c %c \n", one, two, three);
count2 = _printf("%% %% sample text %c \n", three);
printf("character count=> %i\n", count);
printf("character count2=> %i\n", count2);
count = _printf("%%");
count2 = _printf("%%");
printf("character count=> %i\n", count);
printf("character count2=> %i\n", count2);
count = _printf("Should print a single percent sign: %%\n");
count2 = _printf("Should print a single percent sign: %%\n");
printf("character count=> %i\n", count);
printf("character count2=> %i\n", count2);
count = _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
count2 = _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
printf("character count=> %i\n", count);
printf("character count2=> %i\n", count2);
return (0);
}
