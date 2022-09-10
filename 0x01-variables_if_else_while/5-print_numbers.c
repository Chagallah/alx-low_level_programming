#include <stdio.h>
/**
 * main - main block
 * Description: prints all single digits of base 10 starting from 0
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	int n = 0;
	
	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');
	return (0);
}
