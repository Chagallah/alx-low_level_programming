#include "main.h"
#include<stdio.h>

/**
 * _puts - prints a string
 * _putchar - prints the output
 * char character parameter
 * @str: pointer to the string to print
 */
void _putchar(char);
void _puts(char *str)
{
	int c = 0;

	while (str[c])
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
