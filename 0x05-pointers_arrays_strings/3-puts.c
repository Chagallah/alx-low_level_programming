#include "main.h"
#include<stdio.h>

/**
 * _puts - prints a string
 * _putchar - prints the output
 * @str: pointer to the string to print
 */
int _putchar(void);
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
