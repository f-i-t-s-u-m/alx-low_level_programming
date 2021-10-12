#include "lists.h"
/**
 *free_listint2 - function to free linked
 *@head: pointer to the first linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *up;

	temp = *head;
	while (temp)
	{
		up = temp->next;
		free(temp);
		temp = up;
	}
	*head = NULL;
}
