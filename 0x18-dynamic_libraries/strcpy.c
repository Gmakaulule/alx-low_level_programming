#include "main.h"

/**
 * *_strcpy - copystring
 *@src: sourse string
 * Return: returning string
 *@dest: destination string
 */

char *_strcpy(char *dest, char *src)

{
        char *x = dest;

        while (*src != '\0')
        {
                *dest = *src;
                dest++;
                src++;
        }

        *dest = '\0';
                return (x);
}
