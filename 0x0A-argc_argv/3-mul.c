#include <stdio.h>
#include <stdlib.h>

/**
 * main - The entry point
 * @argc: The argument count
 * @argv: An array of the command line arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc < 3)
	{
		puts("Error");
		return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
