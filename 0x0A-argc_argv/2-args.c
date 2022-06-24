#include <stdio.h>

/**
 * main - The entry point
 * separated with a new line
 * @argc: The argument count
 * @argv: An array of the command line arguments
 * Return: Always return 0
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
