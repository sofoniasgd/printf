#include "main.h"
#include<stdio.h>
/**
 * main - check the code for plain strings/NULL
 *
 * Return: Always 0.
 */
int main(void)
{
int count;
char one, two, three;
one = 'a';
two = 'b';
three = 'C';
count = _printf("%c %c %c", one, two, three);
printf("character count=> %i\n", count);
return (0);
}
