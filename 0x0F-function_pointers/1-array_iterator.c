#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of the array
 * @array: array to iterate through
 * @size: size of the array
 * @action: function to use
 * Return: no return (void)
 */
void	array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !action || !size)
		return;
	while (size > 0)
	{
		action(*array);
		array++;
		size--;
	}
}
