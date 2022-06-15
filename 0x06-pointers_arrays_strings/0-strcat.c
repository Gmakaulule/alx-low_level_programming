#include "main.h"
#include <stdio.h>

/**
 * _strlen - counting the length of string
 *
 * @s: it is the string tobe measueredi
 * Return: returning the size on string
 */

int _strlen(char *s)

{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	return (x);

}

/**
 * *_strcat - join two strings
 * @dest: destination string
 * @src: sourse string
 * Return: Always zero
 */

char *_strcat(char *dest, char *src)



{
	int len_d = _strlen(dest);
	int len_s = _strlen(src);
	int i;

	for (i = 0; i <= len_s; i++)
	{
		dest[len_d + 1] = src[i];

	}

	return (0);
}
