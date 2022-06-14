#include <stdio.h>
#include <stdlib.h>
#include<time.h>








int main(void)

{
	srand(time(0));
	int i;
    for(i = 0; i<4; i++)
        printf(" %d ", rand());
}


