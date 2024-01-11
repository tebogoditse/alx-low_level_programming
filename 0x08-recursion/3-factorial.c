#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to be calculated
 * Return: returns factorial of a number
 */

int	factorial(int n)
{
	int	fact;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	fact = n * factorial(n - 1);
	return (fact);
}
