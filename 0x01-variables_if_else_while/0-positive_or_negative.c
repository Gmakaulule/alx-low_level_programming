#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entery point
 * Return: Always 0 (if positive)
 *
 */
int main(void)

{
	int n;

	srand(time(0));
	n = (rand() - RAND_MAX / 2);
	do {
		printf("%d is zero\n", n);
	} while (n = 0);
	do {
		printf("%d is positive\n", n);
	} while (n > 0);
	do {
		printf("%d is negetive)\n", n);
	} while (n < 0);

	return (0);



}
