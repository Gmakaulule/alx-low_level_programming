#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
   const dlistint_t *temp;
   size_t count = 0;

    if(h != NULL)
    {
        for(temp = h;temp != NULL;temp = temp->next)
        {
            count++;
        }
    }
        return(count);
}
