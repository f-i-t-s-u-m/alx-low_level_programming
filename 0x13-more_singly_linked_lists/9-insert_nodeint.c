#include "lists.h"
/**
 *insert_nodeint_at_index - insert new node into linked lits
 *@idx: index to be inserted
 *@n: integer to new node
 *@head: head to linked list
 *Return: new create strutre node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current,  *temp, *new;
	size_t i = 1;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = *head;
	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}
	for (; i <= idx && temp; i++)
	{
		current = temp;
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	current->next = new;
	new->next = temp;
	return (new);
}
