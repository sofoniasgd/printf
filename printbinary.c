#include "main.h"
/**
 * printbinary - prints a number in binary
 * @number: number to be printed
 * Return: count of bits printed
 */
int printbinary(unsigned int number)
{
int count, i;
unsigned int num;
num = number;
count = 0;
if (number == 0)
	{
	return(0); }
for(i = 32; i >= 1;i--)
	{

	if (num == 2)
		{
		_putchar(48);
		_putchar(49);
		count +=2;
		break;
		}
	if (num == 1)
		{
		_putchar(49);
		count++;
		break;
		}
	_putchar((num % 2) + 48);
	num = (num / 2);
	count++;
		
	}
return (count);
}
