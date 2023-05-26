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
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	ptr = get_op_func(argv[2]);

	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
  
  if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", ptr(a, b));

	return (0);
}
