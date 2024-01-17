#include <stdlib.h>
#include <unistd.h>

/**
 * ft_putchar - prints a single character
 * @c: character to print
 * Return - no return
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
 * ft_putnbr - prints a number
 * @nb: number to print
 * Return: no return
 */
void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}

/**
 * main - sums all the positive numbers from the arguments
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int	main(int argc, char **argv)
{
	int	i;
	int	number;
	int	sum;

	i = 1;
	sum = 0;

	if (argc < 2)
	{
		ft_putstr("0\n");
		return (0);
	}

	while (i <= argc - 1)
	{
		number = atoi(argv[i]);
		if (!number)
		{
			ft_putstr("Error\n");
			return (1);
		}
		if (number >= 0)
		{
			sum = sum + number;
		}
		i++;
	}
	ft_putnbr(sum);
	ft_putchar('\n');
	return (0);
}
