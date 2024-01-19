#include <stdlib.h>

/**
 * str_concat - appends s2 to s1
 * @s1: 1st string
 * @s2: string to be appended to s1;
 * Return: new concatenated string
 */
char	*str_concat(char *s1, char *s2)
{
	int	i;
	int	j;
	int	len1;
	int	len2;
	int	total_len;
	char	*result;

	len1 = 0;
	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			len1++;
	}
	len2 = 0;
	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			len2++;
	}
	total_len = len1 + len2;
	result = (char *)malloc(sizeof(char) * (total_len + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len2)
	{
		result[i] = s2[j];
		i++;
		j++;
	}
	result[total_len] = '\0';
	return (result);
}
