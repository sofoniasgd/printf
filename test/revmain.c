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

	len = _printf("%R", "Guvf fragrapr vf ergevrirq sebz in_netf!\n");
	len2 = printf("This sentence is retrieved from va_args!\n");
	printf("len=>%d\n", len);
	printf("len2=>%d\n", len2);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
