#include <unistd.h>

/**
 * ft_putchar - prints a single string
 * @c: character to print
 * Return: no return
 */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/**
 * ft_putstr - prints a string
 * @str: prints a string
 * Return: no return
 */
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

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
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}

	return (0);
}
