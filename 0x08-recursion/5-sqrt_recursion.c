#include "main.h"

int	_sqrt(int n, int y)
{
	if (n > y / 2)
		return (-1);
	if (n * n == y)
		return (n);
	return (_sqrt(n + 1, y));
}

int	_sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(0, n));
}
