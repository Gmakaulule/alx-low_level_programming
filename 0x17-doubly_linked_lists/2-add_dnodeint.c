#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * @brief 
 * 
 * @param head 
 * @param n 
 * @return dlistint_t* 
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *temp = (dlistint_t*)malloc(sizeof(dlistint_t));
   temp -> prev = NULL;
   temp -> n = n;
   temp ->  next = NULL;
   temp -> next = *head;
   *head = temp;
        return(temp);
}
