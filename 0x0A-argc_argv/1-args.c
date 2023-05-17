#include "main.h"
#include <stdio.h>

/**
 * main - print the name of the file followed by a new line
 * @argc: arguments
 * @argv: arguments vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
