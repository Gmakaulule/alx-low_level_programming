#include "main.h"

/**
 * _strncpy - copy string from sourse t destination
 * @dest:it is the destination string
 * @src: it is the sourse string
 * @n: it is the length of the string
 * Return: returning the copy of src
 */

char *_strncpy(char *dest, char *src, int n)

{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
		return (dest);
}

