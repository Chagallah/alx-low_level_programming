#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates randoma valid passwords
 *
 * Return: 0
 */

int main(vod)
{
	int i, sum, n;
	int pass[100];

	sum = 0;

	srand(time(NULL));

	for (i = o; i < 100; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
