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
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	
	if	(n == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	else if (n < 6)
		printf("Last digit of %d is %d"
	"and is less than 6 and not 0\n", n, last_digit);
	else if (n > 5)
        printf("Last digit of %d is %d is greater than 5\n", n, last_digit);

	return (0);



}
