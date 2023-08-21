#include "main.h"
#include<stdarg.h>
#include<stdlib.h>
/**
 * _printf - custom implementation of the printf function
 * @format: format string with/without format specifiers to be printed
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
int i, counter, charnumber;
va_list arguments;
va_start(arguments, format);

/* check if format string is NULL */
if (format == NULL)
	exit(0);
i = 0;
counter = 0;
/* start parsing the format string */
while (*(format + i) != '\0')
	{
	/* if found '%' ? */
	if (*(format + i) == '%')
		{
		if (*(format + i + 1) == '%')
			{
			_putchar(37);
			counter++;
			i += 2;
			continue;
			}
		if (*(format + i + 1) == 'c')
			{
			charnumber = va_arg(arguments, int);
			counter += printchar(charnumber, 0);
			i++;
			}
		}
	/* didnt find '%', so print chracter */
	else
		{
		_putchar(*(format + i));
		counter++;
		}
	i++;
	}
va_end(arguments);
_putchar(10);
return (counter);
}
