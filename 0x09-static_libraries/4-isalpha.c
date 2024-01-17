#include "main.h"

/**
 * _isalpha - checks whether the parameter is an alphabet or not
 * @c: character to check
 * Return: True or False (1 or 0)
 */

int	_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
