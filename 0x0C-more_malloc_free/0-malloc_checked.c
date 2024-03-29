#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/**
 * *malloc_checked - allocates memory
 * @b: memory
 * Return: pointer to the allocated memory
 */
void	*malloc_checked(unsigned int b)
{
	void	*ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
