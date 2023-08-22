#include "main.h"
#include<stdio.h>
/**
 * main - check the code for plain strings/NULL
 *
 * Return: Always 0.
 */
int main(void)
{


	
_printf("A %s sentence\n", "simple");
/*len2 = printf("A %s sentence\n", "simple"); */
	
	_printf("A %c%c%s sentence\n", 's', 'i', "mple");
/*	len2 = printf("A %c%c%s sentence\n", 's', 'i', "mple");*/


	_printf("NULL: %c, %s\n", NULL, NULL);
/*	len2 = printf("NULL: %c, %s\n", NULL, NULL);*/

	_printf("%");
/*	len2 = printf("%");*/

	_printf("A simple sentence%");
/*	len2 = printf("\nA simple sentence%");*/

	return (0);
}
