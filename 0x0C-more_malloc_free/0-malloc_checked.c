#include <stdio.h>
#include <stdlib.h>

void	*malloc_checked(unsigned int b)
{
	void	*ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
