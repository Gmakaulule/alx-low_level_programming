#include "main.h"

/**
 * _isupper - Check of alphaberts are lower or upper case
 *
 * @c: ascii value
 *
 * Return: Always 0 if c is lower case or 1 for uppuer case
 */



int _isdigit(int c)

{
        int x;

        if (c >= 48 && c <= 57)
        {
        x = 1;
        }
        else
        {
        x = 0;
        }

        return (x);
}
