#include <stdlib.h>

/**
 * *_strdup - duplicates a string
 * @str: string to be duplicated
 * Return: the new duplicate string
 */
char	*_strdup(char *str)
{
	char *newStr = NULL;
	unsigned int	i;
	int len;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
		len++;
	newStr = (char *)malloc((sizeof(char) * len) + 1);
	if (newStr == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		newStr[i] = str[i];
		i++;
	}
	return (newStr);
}
