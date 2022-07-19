#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - adds a new node to the head of the linked list
 * @head:pointer to the first node
 * @n:inpude integer to be stored on a node
 * Return: adress to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head = (listint_t *)malloc(sizeof(listint_t));

	new_head->n =  n;
	new_head->next = *head;
	*head = new_head;

return (new_head);
}
