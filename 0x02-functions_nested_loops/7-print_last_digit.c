#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @d: number's last digit result
 * Return: value of the last digit
 */

int print_last_digit(int d)
{
	int n;

	n = (d % 10);

	if (n < 0)
	{
		n = (-1 * n);
	}

	_putchar(n + '0');
	return (n);
}
