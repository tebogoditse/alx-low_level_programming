#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char letter = 'Z';
	while (letter >= 'A')
	{
		putchar(tolower(letter));
		letter--;
	}
	putchar('\n');
	return (0);
}
