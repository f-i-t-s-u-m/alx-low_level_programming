#include "lists.h"

/**
* free_dlistint - a function that free a dlistint_t list.
* @head: pointer that point to the head of list
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	if (!head)
		return;

	ptr = head;

	while (head != NULL)
	{
		head = head->next;
		free(ptr);
		ptr = head;
	}
}
