#include "lists.h"
/**
 *get_nodeint_at_index - function to return node
 *@head: head to linked list
 *@index: a number of index
 *Return: strutre of lined list
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	size_t i = 0;

	temp = head;
	for (; i < index && temp; i++)
	{
		if (temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}
	return (temp);
}
