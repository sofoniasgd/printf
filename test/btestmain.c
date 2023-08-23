#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include<limits.h>
/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;
	long res = INT_MAX;

	res *= 2;

	len = _printf("%b", 1024);
	len2 = printf("10000000000");
	printf("len-%i\n", len);
	printf("len2-%i\n", len2);
	len = _printf("%b", -1024);
	len2 = printf("11111111111111111111110000000000");
	printf("len-%i\n", len);
	printf("len2-%i\n", len2);
	len = _printf("%b", 0);
	len2 = printf("0");	
	printf("len-%i\n", len);
	printf("len2-%i\n", len2);
	len = _printf("There is %b bytes in %b KB\n", 1024, 1);
	len2 = printf("There is 10000000000 bytes in 1 KB\n");
	printf("len-%i\n", len);
	printf("len2-%i\n", len2);
	len = _printf("%b - %b = %b\n", 2048, 1024, 1024);
	len2 = printf("100000000000 - 10000000000 = 10000000000\n");	
	printf("len-%i\n", len);
	printf("len2-%i\n", len2);
	len = _printf("%b + %b = %b\n", INT_MAX, INT_MAX, res);
	len2 = printf("1111111111111111111111111111111 + 1111111111111111111111111111111 = 11111111111111111111111111111110\n");	
	printf("len-%i\n", len);
	printf("len2-%i\n", len2);
	
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
