#include <unistd.h>

/**
 * ft_putchar - prints a single character
 * @c: character to print
 * Return: no return
 */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/**
 * ft_putstr - prints a string
 * @str: string to print
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
 * main - prints the program name
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */

int	main(int argc, char **argv)
{
	(void)argc;
	ft_putstr(argv[0]);
	ft_putchar('\n');

	return (0);
}
