#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: string to print
 * @f: function to use
 * Return: no return (void)
 */
void	print_name(char *name, void (*f)(char *))
{
	if (f == NULL && name == NULL)
		return;
	f(name);
}
