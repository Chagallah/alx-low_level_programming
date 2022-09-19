#include "main.h"

/**
 * _puts - prints a string
 * @str: pointer to the string to print
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
