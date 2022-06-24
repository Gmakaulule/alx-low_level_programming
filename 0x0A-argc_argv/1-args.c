#include <stdio.h>

/**
 * main - count arguments
 * @argc: The argument count
 *
 * @argv: An array of the command line arguments
 * Return: Returns and int
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);

}
