#include "main.h"

/**
 * _isdigit - function that checks for digit (0 through 9)
 * @c: argument
 * Return: 1 if c is digit, 0 if otherwise.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
