#include "main.h"

void	*ft_memset(void *dest, char src, unsigned int n)
{
	unsigned int	i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)dest;
	while (i < n)
	{
		*ptr = (unsigned char)src;
		i++;
		ptr++;
	}
	return (dest);
}
