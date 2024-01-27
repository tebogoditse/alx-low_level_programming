#include "3-calc.h"

/**
 * op_add - adds numbers
 * @a: first number
 * @b: second number
 * Return: sum of both numbers
 */
int	op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts numbers
 * @a: first number
 * @b: second number
 * Return: subtraction result
 */
int	op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies numbers
 * @a: first number
 * @b: second number
 * Return: product of both numbers
 */
int	op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides numbers
 * @a: first number
 * @b: second number
 * Return: result of the division
 */
int	op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of numbers
 * @a: first number
 * @b: second number
 * Return: the remainder from the calculation
 */
int	op_mod(int a, int b)
{
	return (a % b);
}
