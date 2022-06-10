#include <stdio.h>
#include "main.h"

int main(void)

{
    char c;

    c = 48;
    printf("%c: %d\n", int _isdigit(int c));
    c = 'a';
    printf("%c: %d\n", c, int _isdigit(int c));
    return (0);
}
