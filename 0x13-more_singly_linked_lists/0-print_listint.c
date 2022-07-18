#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - print the linked list then count numbers of nodes
 * @h: head pointer it contain the adress of the first node
 * Return: return the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int nodes = 0;
	const listint_t *temp;

	temp = h;
	h = NULL;

while (temp != NULL)
{
	printf("%d\n", temp->n);
	temp = temp->next;
	nodes++;
}
return (nodes);
}
