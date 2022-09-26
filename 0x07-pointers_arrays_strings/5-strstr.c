#include "main.h"

/**
 * _strstr - finds first occurrence of substring needle in haystack str.
 * @haystack: string
 * @needle: substring
 * Return: pointer to the beginning of located substring
 * Or NULL if substring not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (bhaystack);
		haystack = bhaystack + 1;
	}
	return (o);
}
