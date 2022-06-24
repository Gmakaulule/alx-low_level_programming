#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - The entry point
 * @argc: The argument count
 * @argv: An array of the command line arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int sum, i, j;
	char *str;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	i = 1;
	sum = 0;

	while (i < argc)
	{
		str = argv[i];
		while (*str != '\0')
		{
			if (isalpha(*str))
			{
				puts("Error");
				return (1);
			}
			str++;
		}
		j = atoi(argv[i]);
		if (j > 0)
			sum += j;
		i++;

	}
	printf("%d\n", sum);
	return (0);
}
