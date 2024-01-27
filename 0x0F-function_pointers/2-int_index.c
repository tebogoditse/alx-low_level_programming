#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search through
 * @size: size of the array
 * @cmp: function to use
 * Return: index
 */
int	int_index(int *array, int size, int (*cmp)(int))
{
	int	i;

	if (!array || !cmp)
		return (-1);
	if (size < 1)
		return (-1);
	i = 0;
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
