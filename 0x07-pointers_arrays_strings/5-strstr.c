#include "main.h"

/**
 * _strstr - locate bubstring
 * @haystack: sting
 * @needle: string
 * Return: NULL
 */



char *_strstr(char *haystack, char *needle)

{
	const char *a, *b = needle;

	if (!*b)

	return ((char *) needle);

	for ( ; *haystack ; haystack++)
	{

		if (*haystack != *b)
		continue;

		a = haystack;

		for (;;)
		{
		if (!*b)

			return ((char *) haystack);


	if (*a++ != *b++)
		break;


		}
		b = needle;
	}
		return (NULL);
}
