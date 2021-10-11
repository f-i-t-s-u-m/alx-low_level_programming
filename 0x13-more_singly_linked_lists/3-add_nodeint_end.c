#include "lists.h"
#include <stdio.h>
/**
 *add_nodeint_end - a function to add new node
 *@head: pointer to head of linked
 *@n: integer to add to node
 *Return: a pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	temp = *head;
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = new;

	return (*head);
}
