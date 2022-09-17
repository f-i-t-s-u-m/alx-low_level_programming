#include "lists.h"

/**
* sum_dlistint - a function that returns the sum of all the
*data (n) of a dlistint_t linked list.
* @head: a pointer that point to a linked list
* Return: the sum or 0 if the list is empty
**/

int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *ptr;

	if (head == NULL)
		return (0);

	ptr = head;
	sum = 0;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
