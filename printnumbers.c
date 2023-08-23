#include "main.h"
/**
 * power - calculate power of ten
 * @c: exponent
 * Return: 10, 100, 1000,1 multiple of 10 power x
 */
int power(int c)
{
int ans, i;
ans = 1;
if (c == 0)
{
return (1);
}
else
{
for (i = 0; i < c; i++)
{
ans = ans * 10;
}
return (ans);
}
}
/**
 * print_number - prints an int using putchar
 * @n: passed int value
 * Return: number of digits printed
 */
int print_number(int n)
{
int s, counter, len, i;
unsigned int num, d;
len = 0;
d = 1;
counter = 0;
/* if n is -ve, flip it and print - */
if (n < 0)
{
num = (unsigned int)(n * -1);
counter++;
_putchar(45);
}
else
{
num = (unsigned int)n;
}
if (n == 0)
{
counter++;
_putchar(48);
}
/* finds the length if the int n */
for (i = 0; i < 10; i++)
{
d = (i == 0) ? 1 : (d * 10);
if (num >= d)
{
len++;
continue;
}
else
{
break;
}}
/* prints n */
for (i = len; i >= 1; i--)
{
	if (i == 10)
		s = num / power(i - 1);
	else
		s = (num % power(i)) / power(i - 1);
_putchar(s + 48);
counter++;
}
return (counter);
}
/**
 * printnumbers - prints numbers
 * @number: pointer to number
 * @type: format specifier
 * @flag: flag character
 * @width: width amount
 * @lengthmod:length modifier
 * Return: count of printed digits
 */
int printnumbers(int number, __attribute__((unused))char type, __attribute__((unused))char flag, __attribute__((unused))int width, __attribute__((unused))char lengthmod)
{
int count;
if(!number)
	{
	_putchar(48);
	return (1); }
count = print_number(number);
return (count);
}
