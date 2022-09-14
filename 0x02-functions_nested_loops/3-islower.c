#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * @c: single letter input
 * Returns: ne or zero
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
