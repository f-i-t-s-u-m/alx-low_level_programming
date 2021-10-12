#include "lists.h"
/**
 *sum_listint - a function to sum all linked liist
 *@head: head of linked list
 *Return: sum of linked list
 *
 */
int sum_listint(listint_t *head)
{
	int i = 0;

	while (head)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
