 #include <stdio.h>
 #include <stdlib.h>
 #include "lists.h"

 void free_dlistint(dlistint_t *head)
{
    dlistint_t *temp;
    
    if(head != NULL)
    {
        for(temp = head;temp != NULL;temp = temp->next)
        {
            free(temp);
            
        }
    }
}