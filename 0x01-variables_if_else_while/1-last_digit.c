#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - compares numbers
 *
 * Return: 0 if true
 */
int main(void)
{
	int n;
	int i;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;
	if (i > 5)
	{
		printf("Last digit of %d is %i and is greater than 5\n", n, i);
	}
	if (i == 0)
	{
		printf("Last digit of %d is %i and is 0\n", n, i);
	}
	if (i < 6 && i != 0)
	{
		printf("Last digit of %d is %i and is less than 6 and not 0\n", n, i);
	}

	return (0);
}
