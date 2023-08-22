#include "main.h"
#include<stdarg.h>
#include<stdlib.h>

/**
 * printescape - handles whatever comes after '\' in strings
 * @character: escape charatcter
 * Return: none
 */
void printescape(char character)
{
if (character == 'n')
	{
	_putchar(10); }
if (character == 't')
	{
	_putchar(9); }
if (character == '\'')
	{
	_putchar(39); }
if (character == '\"')
	{
	_putchar(34); }
if (character == '\\')
	{
	_putchar(92); }
}
/**
 * _printf - custom implementation of the printf function
 * @format: format string with/without format specifiers to be printed
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
int i, counter, charnumber;
char *string;
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
			continue; }
		if (*(format + i + 1) == 'c')
			{
			charnumber = va_arg(arguments, int);
			counter += printchar(charnumber, 0);
			i++; }
		if (*(format + i + 1) == 's')
			{
			string = va_arg(arguments, char *);
			counter += printletters(string, 's', '1', 0, '1');
			i++; }}
	/* didnt find '%', so print chracter */
	else if (*(format + i) == '\\')
		{
		counter += 2;
		printescape(*(format + i + 1));
		i += 2;}
	else
		{
		_putchar(*(format + i));
		counter++; }
	i++; }
va_end(arguments);
return (counter); }
