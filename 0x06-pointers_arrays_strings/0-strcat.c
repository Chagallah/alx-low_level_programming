#include "main.h"
#include <stdio.h>

/**
 * *_strcat - function that concatenates two strings.
 * @dest: parameter pointer to a character
 * @src: parameter pointer to a character
 * Return: pointer to resulting string dest
 */

char *_strcat(char * dest, char * src)
{
	int a;
	int b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
		return (dest);
}
