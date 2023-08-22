#include "main.h"
/**
 * printletters - prints strings
 * @string: pointer to string
 * @type: format specifier oneof ('s', 'r', 'R')
 * @flag: flag characters one of ('+', ' ', '#', '0', '-')
 * @width:minimum width specifier
 * @lengthmod: length modifier, one of ('l', 'h')
 * Return: number of characters printed
 */
int printletters(char *string, char type, char flag, int width, char lengthmod)
{
int i;

if (type == '0')
	{}
if (flag == '1')
	{}
if (width == 0)
	{}
if (lengthmod == '0')
	{}
i = 0;
while (*(string + i) != '\0')
	{
	_putchar(*(string + i));
	i++;
	}
return (i);
}
