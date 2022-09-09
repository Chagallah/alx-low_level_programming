#include<stdio.h>
#include<stdlib.h>
/**
 * main - main block
 *
 * Description - print alphabet
 *
 * Return: 0
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
