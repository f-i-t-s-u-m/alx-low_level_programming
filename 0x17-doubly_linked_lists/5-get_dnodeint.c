#include "lists.h"

/**
* get_dnodeint_at_index - a function that returns the nth
*node of a dlistint_t linked list.
* @head: pointer that point to a linked list
* @index: is the index of the node, starting from 0
* Return: the node or NULL if the node does not exist
**/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	ptr = head;

	while (i < index && ptr != NULL)
	{
		ptr = ptr->next;
		i += 1;
	}

	if (i != index)
		return (NULL);

	return (ptr);
}
