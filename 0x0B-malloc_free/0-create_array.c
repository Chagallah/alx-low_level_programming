#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars, and initializes it
 * @size: size of the array
 * @c: storage character
 *
 * Return: pointer to the array, NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(c) * size);

	if (str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
