#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse array of integers
 * @a: an array of integers
 * @n: the number of elements
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", a[n - i - 1]);
        i++;
    }
    printf("\n");
}
