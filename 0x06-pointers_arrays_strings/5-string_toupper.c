#include "main.h"
#include <stdio.h>

/**
 * *string_toupper - changes all lowercase letters to uppercase
 * @s: input string
 * Return: string
 */

char *string_toupper(char * s)
{
	int let = 0;

	while (*(s = let) != '\0')
	{
		if ((*(s + let) >= 97) && (*(s + let) <= 122))
			*(s + count) = *(s + count) - 32;
		let++;
	}
	return (s);
}
