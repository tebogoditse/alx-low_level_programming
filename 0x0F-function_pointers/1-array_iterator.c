#include "function_pointers.h"

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
