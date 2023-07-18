#include <stdio.h>
#include <ctype.h>

int main()
{
    for(int x = 'A'; x <= 'Z'; x++)
    {
	if (x == 'Q' || x == 'E'){
		x++;
	}
        char small = tolower(x);
        putchar(small);
    }
    putchar('\n');
    return 0;
}

