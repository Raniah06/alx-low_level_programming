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
	int total, i;
	
	total = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			if (argv[i] != '\0')
				total += argv[i];
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", total);
	return (0);
}
