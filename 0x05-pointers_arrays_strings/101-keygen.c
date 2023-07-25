#include "main.h"
#include <time.h>

int	main(void)
{
	int pass[100];
	int i, n, sum;

	sum = 0;
	srand(time(NULL));

	i = 0;
	while (i <= 99)
	{
		pass[i] = rand() % 78;
		sum = sum + (pass[i] + '0');
		_putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum = sum + n;
			_putchar(m + '0');
			break;
		}
		i++;
	}
	return (0);
}
