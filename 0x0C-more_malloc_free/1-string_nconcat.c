#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - ...
  * @s1: first input string
  * @s2: second input string
  * @n: provided length
  *
  * Return: returning concatanated string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, l = 0;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[k])
		k++;

	if (n >= k)
		l = i + k;
	else
		l = i + n;

	new_str = malloc(sizeof(char) * l + 1);
	if (new_str == NULL)
		return (NULL);

	k = 0;
	while (j < l)
	{
		if (j <= i)
			new_str[j] = s1[j];

		if (j >= i)
		{
			new_str[j] = s2[k];
			k++;
		}
		j++;
	}
	new_str[j] = '\0';
	return (new_str);
}
