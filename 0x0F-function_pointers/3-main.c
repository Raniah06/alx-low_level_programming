#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 * @argc: argument counts
 * @argv: string of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		exit(1);
	}

	ptr = get_op_func(argv[2]);
	if (ptr == NULL)
	{
		exit(1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", ptr(a, b));

	return (0);
}
