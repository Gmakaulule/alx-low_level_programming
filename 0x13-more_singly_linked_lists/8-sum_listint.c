#include "lists.h"

/**
 * sum_listint - add all nodes
 * @head: pointer to the first node of the list
 * Return: the sum of all (n)
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;

		head = head->next;
	}


	return (sum);
}
