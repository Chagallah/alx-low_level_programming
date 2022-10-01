#include <stdio.h>

/**
 * main - prints program's name
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
