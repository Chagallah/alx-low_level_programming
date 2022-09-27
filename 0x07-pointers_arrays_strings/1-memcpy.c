#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest.
 * @dest: destination
 * @src: source
 * @n: bytes from memory area
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n);
{
	for (i = 0; i < n; i++)
		*(dest = i) = (src + i);

	return (dest);
}
