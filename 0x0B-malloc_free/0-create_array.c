#include <stdlib.h>

/**
 * *create_array - creates an using a specific character
 * @size: size of an array
 * @c: character of the elements
 * Return: create array
 */
char	*create_array(unsigned int size, char c)
{
	char	*array = NULL;
	unsigned int	i;

	if (size == 0)
		return (NULL);
	if (size != 0)
	{
		array = (char *)malloc(sizeof(char) * size);
		if (array != NULL)
		{
			i = 0;
			while (i < size)
			{
				array[i] = c;
				i++;
			}
		}
	}
	return (array);
}
