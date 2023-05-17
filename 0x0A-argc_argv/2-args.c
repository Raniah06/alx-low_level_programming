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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
