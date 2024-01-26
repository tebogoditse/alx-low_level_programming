#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints the number of strings according to the arguments
 * @separator: character to print between the strings
 * @n: number of arguments
 * Return: no return (void)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char	*str;
	unsigned int	i;
	va_list	ap;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";
	i = 0;
	while (i < n)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ap);
}
