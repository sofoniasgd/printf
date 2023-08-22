#include "main.h"
#include<stdlib.h>
/**
 * printnill - prints (nill)
 * Return: none
 */
void printnill(void)
{
	_putchar(40);
	_putchar(110);
	_putchar(117);
	_putchar(108);
	_putchar(108);
	_putchar(41);
}
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
int i, retchk;
if (string == NULL)
	{
	printnill();
	return (5);
	}

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
	if (*(string + i) == 92)
		{
		retchk = printescape(*(string + i + 1));
		if (retchk == -1)
			{
			return (-1); }
		i += 2;
		}
	else if (*(string + i) == '%' || *(string + i + 1) == '%')
		{
		_putchar(37);
		}
	else
		{
		_putchar(*(string + i)); }
	i++;
	}
return (i);
}
