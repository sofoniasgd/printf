#include <stdio.h>
#include "main.h"
#include <limits.h>
#define ZERO 0
int main(void)
{
	int len = 0;
	int len2 = 0;
	int num1 = 0;
	int num2 = 0;	
	len = _printf("Number: %d, %i\n", 4034, 4034);
	len2 = printf("Number: %d, %i\n", 4034, 4034);
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);
	
	len = _printf("Negative: %i, %d\n", -4034, -4034);
	len2 = printf("Negative: %i, %d\n", -4034, -4034);
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("long: %i, %d\n", 4545439394949595, 4545439394949595);
	len2 = printf("long: %i, %d\n", 4545439394949595, 4545439394949595);
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("long: %i, %d\n", -4545439394949595, -4545439394949595);
	len2 = printf("long: %i, %d\n", -4545439394949595, -4545439394949595);
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("NULL: %i\n", NULL);
	len2 = printf("NULL: %i\n", NULL);
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("%d\n", INT_MAX);
	len2 = printf("%d\n", INT_MAX);
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("%d\n", INT_MIN);
	len2 = printf("%d\n", INT_MIN);
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);
	_printf("Reverse:[%r]\n", "I am a string !");
	printf("Reversed:[%r]\n", "I am a string !");
 num1 = _printf("Binary:[%b]\n", 98);
	num2 = printf("Binary:[%b]\n", 98);
    printf("num1:[%d]\n", num1);
	printf("num2:[%d]\n", num2);

    num1 = _printf("Binary:[%b]\n", 584);
	num2 = printf("Binary:[%b]\n", 584);
    printf("num1:[%d]\n", num1);
	printf("num2:[%d]\n", num2);

    num1 = _printf("Null Binary:[%b]\n", NULL);
	num2 = printf("Null Binary:[%b]\n", NULL);
    printf("num1:[%d]\n", num1);
	printf("num2:[%d]\n", num2);

    num1 = _printf("Zero Binary:[%b]\n", ZERO);
	num2 = printf("Zero Binary:[%b]\n", ZERO);
    printf("num1:[%d]\n", num1);
	printf("num2:[%d]\n", num2);
	
	
	return (0);
}
