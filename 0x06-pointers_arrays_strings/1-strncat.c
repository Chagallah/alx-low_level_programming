#include "main.h"
#include <stdio.h>

/**
 * *_strncat - function that concatenates two strings.
 * @dest: destination
 * @src: source
 * @n: bytes from source
 * Return: pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int str1 =  0, str2 = 0;

	while (*(dest + count) != '\0')
	{
		str1++;
	}

	while (str2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + str2) == '\0')
			break;
		str1++;
		str2++;
	}
	return (dest);
}
