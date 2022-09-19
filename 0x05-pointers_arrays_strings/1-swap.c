#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: swap integer
 * @b: swap integer
 */

void sap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
