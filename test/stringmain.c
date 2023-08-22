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
char *one, *two, *three;
one = "abcd";
two = "ABCD";
three = "123456";
count = 0;
count += _printf("%s\n%s\n%s", one, two, three);
count += _printf("Let's try to printf a simple sentence.\n");
_printf("_empty Character:[%c]\n", ' ');
printf("empty Character:[%c]\n", ' ');
_printf("_Character:[%c]\n", 'H');
printf("Character:[%c]\n", 'H');
_printf("Character:[%c%c]\n", 'H', 'I');
printf("Character:[%c%c]\n", 'H', 'I');
_printf("Character:[%c%c%c]\n", 'H', 'I', '!');
printf("Character:[%c%c%c]\n", 'H', 'I', '!');
_printf("Character:[%c %c %c]\n", 'H', 'I', '!');
printf("Character:[%c %c %c]\n", 'H', 'I', '!');
_printf("Two c with Space:[%c %c]\n", 'H', 'I');
printf("Two c with Space:[%c %c]\n", 'H', 'I');
_printf("empty String:[%s]\n", "");
printf("empty String:[%s]\n", "");
_printf("Space String:[%s]\n", " ");
printf("Space String:[%s]\n", " ");
_printf("String:[%s]\n", "I am a string !");
printf("String:[%s]\n", "I am a string !");
_printf("String:[%s%s]\n", "I am a string !", "second string !");

printf("character count=> %i\n", count);
return (0);
}
