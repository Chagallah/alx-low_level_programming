#include "main.h"

/**
 * _memset - fills the first n bytes of memory area pointed to by s with byte b.
 * @n: bytes of the memory
 * @s: size of memory to print
 * @b: address of memory to print
 * Return: pointer to s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
