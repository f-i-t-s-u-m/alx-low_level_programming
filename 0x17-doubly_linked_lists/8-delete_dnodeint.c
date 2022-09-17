#include "lists.h"

/**
* delete_dnodeint_at_index -  a function that deletes
*the node at index index of a dlistint_t linked list.
* @head: a pointer that point to a pointer to a linked list
* @index: is the index of the node that should be deleted.
*Index starts at 0
* Return: 1 if it succeeded, -1 if it failed
**/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr, *previous;
	unsigned int i;

	if (!head || !(*head))
		return (-1);
	ptr = *head;
	previous = NULL;
	i = 0;

	while (i < index && ptr != NULL)
	{
		i += 1;
		previous = ptr;
		ptr = ptr->next;
	}
	if (i != index)
		return (-1);
	if (index == 0)
		*head = ptr->next;
	else
		previous->next = ptr->next;
	if (ptr->next != NULL)
		ptr->next->prev = previous;
	free(ptr);

	return (1);
}
