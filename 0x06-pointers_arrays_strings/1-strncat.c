	#include "main.h"

/**
 * _strncat - concatinate 2 strings.
 * @dest: first string.
 * @src: second string.
 *
 * @n: the length of string
 * Return: string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int x = 0;

	while (dest[i] != '\0')
		i++;

	while (src[x] != '\0' && n > x)
	{
		dest[i] = src[x];
		x++;
		i++;
	}
	if (n > 0)
	{
		dest[i] = '\0';
	}

	return (dest);
}

