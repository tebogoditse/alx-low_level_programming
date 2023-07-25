#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array elements, followed by a new line
 * @a: array parameter
 * @n: number of elements parameter
 */

void	print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	_putchar('\n');
}
