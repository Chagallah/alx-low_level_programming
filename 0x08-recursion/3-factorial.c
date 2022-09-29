#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: integer
 * Return: factorial of given number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
