#include "lists.h"
/**
 *add_nodeint - a function that adds a new node at the beginning
 *@head: struct list_T
 *@n: integer to add
 *Return: pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp, *new;

	temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *temp;
	*head = new;
	return (new);
}
