#include "main.h"

int	_atoi(char *s)
{
	int sum, found, sign;

	sum = 0;
	sign = 1;
	found = 1;
	while (*s == ' ' || *s == '\n' || *s == '\t' || *s == '\f' || *s == '\r')
		s++;
	if (*s == '-')
		sign = -1;
	if (*s == '-' || *s == '+')
		s++;
	while (*s && found)
	{
		if (*s >= '0' && *s <= '9')
			sum = sum * 10 + *s - '0';
		else
			found = 0;
		s++;
	}
	return (sign * sum);
}
