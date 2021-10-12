#include "lists.h"
/**
 *free_listint - function to free memory
 *@head: pointer to head of linked list
 */
void free_listint(listint_t *head)
{
	listint_t *temp, *up;
	temp = head;
	while (temp)
	{
		up = temp->next;
		free(temp);
		temp = up;
			
	}
}
