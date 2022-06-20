#include "main.h"
/**
 * _memset - fill constants to privided memory
 * @s: pointer to provided string
 * @b: constants to be writen
 * @n:	number of times b will be writen
 * Return: returning the resultant string
 */


char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
	*s = b;
	s++;
	n--;
	}
	return (s);


}
