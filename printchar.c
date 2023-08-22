#include "main.h"
#include<stddef.h>
#include<stdio.h>
/**
 * printchar - printfs a char with padding(if width > 0)
 * @number: character to be printed
 * @width: width specifier
 * Return: number of characters printed
 */
int printchar(int number, int width)
{
int i;
int counter;
counter = 0;
/*if (number == NULL)*/
/*	{*/
/*	return (-1);*/
/*	}*/

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
