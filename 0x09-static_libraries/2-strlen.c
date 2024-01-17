#include "main.h"

/**
 * _strlen - finds the length of the string
 * @s: the string parameter
 * Return: the string length
 */

int	_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;

	return (i);
}
