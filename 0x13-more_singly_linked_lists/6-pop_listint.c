#include "lists.h"
/**
 *pop_listint - a function that delete head
 *@head: pointer to the head
 *Return: head node data
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (*head == NULL)
		return (0);
	temp = *head;
	i = temp->n;
	*head = temp->next;
	free(temp);
	return (i);

}
