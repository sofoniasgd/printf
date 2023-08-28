#include "main.h"
#include<stdlib.h>
/**
 * reverse - reverses an array
 * @a: array pointer
 * Return: number of chars printed
 */

int reverse(char *a)
{
int n, number;
if (a == NULL)
	return (-1);
n = 0;
while (*(a + n) != '\0')
	{
	n++;
	}
number = n;
n -= 1;
while (n >= 0)
	{
	_putchar(*(a + n));
	n--;
	}
return (number);
}
/**
 * rot13 - does the ROT13 cipher in an input string
 * @n: pointer to start of string
 * Return: *n pointer to start of string
 */
int rot13(char *n)
{
char look[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char set[] =  "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i, j, flag, count;
if (n == NULL)
	return (-1);
count = 0;
j = 0;
i = 0;
flag = 0;
while (*(n + j) != '\0')
{
	i = 0;
	while (look[i] != '\0')
	{
		if (*(n + j) == look[i])
		{
			/* *(n + j) = set[i]; */
			_putchar(set[i]);
			count++;
			flag = 1;
			break;
		}
	i++;
	}
	if (flag == 1)
		flag = 0;
	else
		{
		_putchar(*(n + j));
	       count++;	}

j++;
}
return (count);
}
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
	return (6);
	}

if (flag == '1')
	{}
if (width == 0)
	{}
if (lengthmod == '0')
	{}
i = 0;
if (type == 's')
{
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
}
else if (type == 'R')
	{
	i = rot13(string);
	if (i == -1)
		return (-1);
	}
else if (type == 'r')
	{
	i = reverse(string);
	if (i == -1)
		return (-1);
	}
return (i);
}
