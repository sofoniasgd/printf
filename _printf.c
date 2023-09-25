#include "main.h"
#include<stdarg.h>
#include<stdlib.h>

/**
 * printescape - handles whatever comes after '\' in strings
 * @character: escape charatcter
 * Return: none
 */
int printescape(char character)
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
else
	{
	return (-1); }
return (0);
	}
/**
 * _printf - custom implementation of the printf function
 * @format: format string with/without format specifiers to be printed
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
int i, el, counter, charnumber, number, retchk;
unsigned int bin;
char *string;
va_list arguments;
va_start(arguments, format);
/* check if format string is NULL */
if (format == NULL)
	return (-1);
retchk = 0;
i = 0;
counter = 0;
el = 1;
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
		else if (*(format + i + 1) == 'c')
			{
			charnumber = va_arg(arguments, int);
			counter += printchar(charnumber, 0);
			i++; }
		else if (*(format + i + 1) == 'd' || *(format + i + 1) == 'i')
			{
			number = va_arg(arguments, int);	
			counter += printnumbers(number, *(format + i + 1), '1', 0, '1');
			i++; }
		else if (*(format + i + 1) == 's' || *(format + i + 1) == 'r' || *(format + i + 1) == 'S' || *(format + i + 1) == 'R')
			{
			string = va_arg(arguments, char *);
			counter += printletters(string, *(format + i + 1), '1', 0, '1');
			i++; }
		else if (*(format + i + 1) == 'd' || *(format + i + 1) == 'i')
			{
			number = va_arg(arguments, int);
			counter += printnumbers(number, *(format + i + 1), '1', 0, '1');
			i++; }
		else if (*(format + i + 1) == 'b')
		{
			bin = va_arg(arguments, unsigned int);
			counter += printbinary(bin);
			i++; }
		else if (*(format + i + 1) == '\0')
			{
			return (-1); }
		else if (*(format + i + 1) == ' ' && *(format + i + 2) == '\0')
			{
			return (-1); }
		else if (el)
			{
			_putchar(*(format + i));
			counter++; }
		}
	/* didnt find % so continue printing */
	else if (*(format + i) == 92)
		{
		counter++;
		retchk = printescape(*(format + i + 1));
		if (retchk == -1)
			return (-1);
		i += 1; }
	else
		{
		_putchar(*(format + i));
		counter++; }
	i++; }
va_end(arguments);
return (counter); }
