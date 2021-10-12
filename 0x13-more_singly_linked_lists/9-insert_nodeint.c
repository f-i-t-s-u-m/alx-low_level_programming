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
	size_t i = 0;
	
	if(head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = *head;
	for (; i < idx && temp; i++)
	{
		if(temp == NULL)
			return (NULL);
		current = temp;
		temp = temp->next;
	}
	current->next = new;
	new->next = temp;
	return (new);
}
