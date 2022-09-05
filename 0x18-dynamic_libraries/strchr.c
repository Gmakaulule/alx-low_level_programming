#include "main.h"
/**
 * _strchr - serch for a provided charector
 * Return: return pointer to string
 * @s: provided string
 * @c: provided charector
 */

char *_strchr(char *s, char c)

{

        int i = 0;

                while (*s != c)
                {
                        ++s;
                        ++i;
                }
                if (*s == c)
                {
                        return (s);

                }
                else if (*s == '\0')
                {
                        return (s);
                }
                return (0);

}
