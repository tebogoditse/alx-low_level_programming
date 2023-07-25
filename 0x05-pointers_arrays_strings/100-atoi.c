#include "main.h"

int	_atoi(char *s)
{
	int i, sum, found, sign;

	i = 0;
	sum = 0;
	sign = 1;
	found = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && found)
	{
		if (str[i] > '-1' && str[i] < '10')
			sum = sum * 10 + *str - '0';
		else
			found = 0;
		i++;
	}
	return (sign * sum);
}
