#include "main.h"

/**
 * print_rev - prints a string in reverse
 * count is to firdt count to end, n is to count back
 * @s: input string
 */

void print_rev(char *s)
{
	int count = 0;
	int a, n;

	for (a = 0; s[a] != '\0'; a++)
	{
		count++;
	}
	for (n = (count--); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
