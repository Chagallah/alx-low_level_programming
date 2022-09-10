#include <stdio.h>
/**
 * main - Entry point
 * Description - Print letters except q and e
 * Return: 0 om success
 */
int main(void)
{
	char a = 'a';
	
	while (a <= 'z')		
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
