#include "main.h"
/**
 * powr - calculates result of x base 2
 * @ex: exponent
 * Return: result
 */
unsigned int powr(unsigned int ex)
{
unsigned int  i;
unsigned int result;
result = 1;
if (ex == 0)
	return (1);
if (ex == 32)
	return (4294967295);
for (i = 0; i < ex; i++)
	{
	result *= 2;
	}
return (result);
}
/**
 * printbinary - prints a number in binary
 * @number: number to be printed
 * Return: count of bits printed
 */
int printbinary(unsigned int number)
{
int count, length;
unsigned int num, i;

num = number;
count = 0;
length = 0;
if (number == 0)
	{
	_putchar(48);
	return (1); }
for (i = 0; i < 32; i++)
	{
	if (num >= powr(i))
		count++;
	}

for (count = count - 1; count >= 0; count--)
	{
	if (num >= powr(count))
		{
		_putchar(49);
		length++;
		num -= powr(count);
		}
	else
		{
		_putchar(48);
		length++;
		}
	}

return (length);
}
