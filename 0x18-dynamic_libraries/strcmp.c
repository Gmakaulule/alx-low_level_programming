#include "main.h"

/**
 * _strcmp - compare strings
 * Return: the values of string deffirence
 * @s1: string tobe compared
 * @s2: second string to be compared
 */
int _strcmp(char *s1, char *s2)

{
        int i;

        for (i = 0; s1[i] && s2[i]; ++i)
        {
                if (s1[i] == s2[i] || (s1[i] ^ 32) == s2[i])
                continue;
        else
                break;
        }
                if (s1[i] == s2[i])
                return (0);
        if ((s1[i] | 32) < (s2[i] | 32))
        {
                return (-1);
        }

        return (1);
}
