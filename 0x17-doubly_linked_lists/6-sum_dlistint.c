#include <stdlib.h>
#include "lists.h"

/**
  * sum_dlistint - add all numbers in a linked list
  * @head: pointer to the first node of doubly linked list
  *
  * Return: The sum of list
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head)
	{
		while (temp != NULL)
		{
			sum += temp->n;
			temp = temp->next;
		}
	}

	return (sum);
}