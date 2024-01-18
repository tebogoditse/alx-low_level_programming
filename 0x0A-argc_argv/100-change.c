#include <unistd.h>
#include <stdlib.h>

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
 * main - prints the minimum number of coins to make change from an amount
 * @argc:argument count
 * @argv: argument
 * Return: 0(success) or 1(fail)
 */
int	main(int argc, char **argv)
{
	int	coins;
	int	change;

	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (1);
	}
	coins = 0;
	change = atoi(argv[1]);
	while (change > 0)
	{
		if (change - 25 >= 0)
			change = change - 25;
		else if (change - 10 >= 0)
			change = change - 10;
		else if (change - 5 >= 0)
			change = change - 5;
		else if (change - 2 >= 0)
			change = change - 2;
		else if (change - 1 >= 0)
			change = change - 1;
		coins++;
	}
	ft_putnbr(coins);
	ft_putchar('\n');
	return (0);
}
