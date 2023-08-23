#include "main.h"
/**
 * printchar - prints a char with padding(if width > 0)
 * @number: character to be printed
 * @width: width specifier
 * Return: number of characters printed
 */
int printchar(int number, int width)
{
int i;
int counter;
counter = 0;
if (!number)
	{
	return (1);
	}
/* check if width specified >= 2 */
if (width >= 2)
	{
	/* fill empty space till c with ' ' */
	for (i = 0; i < (width - 1); i++)
		{
		_putchar(' ');
		counter++;
		}
	}
/* print c */
_putchar(number);
counter++;
return (counter);
}
