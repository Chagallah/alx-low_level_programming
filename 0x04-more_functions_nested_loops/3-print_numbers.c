#include "main.h"
#include<stdio.h>

/**
 * print_numbers - prints 0 -9
 * followed by a new line
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	_putchar('\n');
}
