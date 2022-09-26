#include "main.h"

/**
 * _strpbrk - locates first occurrence in the string s.
 * @s: string
 * @accept: accept string
 * Return: pointer to byte s that matches bytes in accept.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(acccept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
