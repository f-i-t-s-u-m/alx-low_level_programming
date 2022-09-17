#include "lists.h"

/**
* insert_dnodeint_at_index - a function that inserts a
*new node at a given position
* @h: the pointer to a pointer to a linked list
* @idx: is the index of the list where the new node
*should be added. Index starts at 0
* @n: the data in the list
* Return: the address of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *new, *previous = NULL;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (*h == NULL && idx == 0)
	{
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	ptr = *h;
	while (i < idx && ptr != NULL)
	{
		i += 1;
		previous = ptr;
		ptr = ptr->next;
	}
	if (i != idx)
		return (NULL);
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	if (ptr != NULL)
		ptr->prev = new;
	new->next = ptr;
	new->prev = previous;
	previous->next = new;
	return (new);
}
