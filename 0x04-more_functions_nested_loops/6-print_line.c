#include "main.h"
/**
 * print_line - draws a straight line
 * @n: integer type
 * Return: void
 */
void print_line(int n)
{
	char a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
