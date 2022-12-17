#include "main.h"

/**
 * _is alpha - check for alphabetic character
 *
 * @c: character to check
 *
 * Description: checks for alpha
 *
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
