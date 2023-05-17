#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the name of the file followed by a new line
 * @argc: arguments
 * @argv: arguments vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argc;

	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");

	return (1);
}
