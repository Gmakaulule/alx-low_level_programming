#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 * Return: return zoro
 */

int main(void)

{
	int n;
	int last_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_d = n % 10;

	if (last_d == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, last_d);
	}

	else if (last_d < 6 && last_d != 0)

	{

		printf("Last digit of %d is %d and is less than 6 and not zero\n", n, last_d)
;
	}

	else if (last_d > 5 && last_d != 6)

	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_d);

	}

	return (0);
}
