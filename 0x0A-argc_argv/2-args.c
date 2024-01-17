#include <stdio.h>

/**
 * main - prints all the arguments in a new line
 * @argc: argument counter
 * @argv: arguments
 * Return: 0
 */

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i <= argc - 1)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
