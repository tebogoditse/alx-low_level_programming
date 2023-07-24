#include "main.h"

/**
 * swap_int - swaps the two parameters
 * @a: pointer to first value
 * @b: pointer to second value
 */

void	swap_int(int *a, int *b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}
