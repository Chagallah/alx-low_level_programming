#include "main.h"
#include<stdio.h>

/**
 * _puts - prints a string
 * @str: pointer to the string to print
 * char - character parameter
 */
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
