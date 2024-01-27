#include <stdio.h>
#include <stdlib.h>
/**
 * main- prints the opcodes of its own main function
 * @argc: the number of arguments
 * @argv: the arguments
 * Return: 0 in succes
*/
int main(int argc, char **argv)
{
	int i, n;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	i = 0;
	while (i < n)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < n - 1)
			printf(" ");
		else
			printf("\n");
		i++;
	}
	return (0);
}
