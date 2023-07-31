#include "main.h"
#include <stdio.h>

void	print_diagsums(int *a, int size)
{
	int	i, j, sum1, sum2, k, l;

	k = size - 1;
	sum1 = 0;
	sum2 = 0;
	l = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (i == j)
				sum1 = sum1 + a[l];
			if (j == k)
				sum2 = sum2 + a[l];
			l++;
			j++;
		}
		k--;
		i++;
	}
	printf("%i, %i\n", sum1, sum2);
}
