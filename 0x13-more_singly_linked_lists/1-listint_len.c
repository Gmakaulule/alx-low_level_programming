#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * listint_len - count number of nodes on a linked list
 * @h: is the head pointer to a linked list
 * Return: returning the counnt of the nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t len = 0;

	temp = h;
	h = NULL;

while (temp != NULL)
{
	temp = temp->next;
	len++;
}
return (len);
}
