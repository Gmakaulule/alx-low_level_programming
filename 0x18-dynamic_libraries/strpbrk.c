#include "main.h"
#include <stdlib.h>
/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: pointer to string
 *@accept: second string
 *Return: pointer to input string
 */
char *_strpbrk(char *s, char *accept)

{
        int i = 0;
        int x = 0;
        int r = 0;
        int z = 0;

        while (*(s + i))
        i++;
        r = i;
        i = 0;
        while (*(accept + i))
        {
                x = 0;
                while (*(s + x))
                {
                        if (accept[i] == s[x])
                        {
                                if (x <= r)
                                {
                                        r = x;
                                        z = 1;
                                }
                        }
                        x++;
                }

                i++;
        }

        if (z == 1)
        return (&s[r]);
        return (NULL);
}
