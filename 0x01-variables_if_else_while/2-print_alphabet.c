#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char letter = 'A';
	while (letter <= 'Z')
	{
		putchar(tolower(letter));
		letter++;
	}
	putchar('\n');
	return (0);
}
