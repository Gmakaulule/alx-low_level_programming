#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *temp;
    size_t count = 0;

    if(head != NULL)
    {
        for(temp = head;temp != NULL;temp = temp->next)
        {
            count++;

          if(index <= count)
            {
                return(temp);
            }
            else
                return(NULL);
        }
        
    }
    return(temp);
}