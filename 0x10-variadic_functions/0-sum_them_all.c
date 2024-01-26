#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all the arguments
 * @n: number of arguments
 * Return: the sum of the numbers passed
 */
int	sum_them_all(const unsigned int n, ...)
{
	unsigned int	sum;
	va_list ap;
	unsigned int	i;

	va_start(ap, n);
	if (n == 0)
		return (0);

	sum = 0;
	i = 0;
	while (i < n)
	{
		sum = sum + va_arg(ap, int);
		i++;
	}
	va_end(ap);

	return (sum);
}
