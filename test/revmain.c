#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;

	len = _printf("%r", "\nThis sentence is retrieved from va_args!");
	len2 = printf("!sgra_av morf deveirter si ecnetnes sihT\n");
	printf("len=%i\n", len);
	printf("len2=%i\n", len2);
	len = _printf("Complete the sentence: You %r nothing, Jon Snow.\n", "know");
	len2 = printf("Complete the sentence: You wonk nothing, Jon Snow.\n");
	printf("len=%i\n", len);
	printf("len2=%i\n", len2);
	len = _printf("Complete the sentence: You %r nothing, Jon Snow.\n", "");
	len2 = printf("Complete the sentence: You  nothing, Jon Snow.\n");
	
	printf("len=%i\n", len);
	printf("len2=%i\n", len2);
	
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
