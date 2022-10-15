#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main  main file
 * @argc: number of lines arguments
 * @argv: array of elements
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int I;

	if (argc != 4)
	{
		printf("Erro\n");
		exit(98);
	}

	I = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", I);

	return (0);
}
