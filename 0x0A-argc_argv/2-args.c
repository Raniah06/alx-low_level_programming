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
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
                i++;
	}

	return (0);
}
