#include "lists.h"

/**
* add_dnodeint_end - a function that adds a new node
*at the end of a dlistint_t list.
* @head: pointer that point to a linked list
* @n: the data in the node
* Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *next_n;
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	next_n = *head;
	while (next_n->next != NULL)
		next_n = next_n->next;
	new->prev = next_n;
	next_n->next = new;

	return (new);
}
