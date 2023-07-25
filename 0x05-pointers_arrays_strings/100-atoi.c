#include "main.h"

int	_atoi(char *s)
{
	int sum, found, sign;

	sum = 0;
	sign = 1;
	found = 1;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && found)
	{
		if (*str > '-1' && *str < '10')
			sum = sum * 10 + *str - '0';
		else
			found = 0;
		str++;
	}
	return (sign * sum);
}
