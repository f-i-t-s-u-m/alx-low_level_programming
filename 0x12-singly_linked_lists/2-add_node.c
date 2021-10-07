#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *_strlen - function to count length
 *@str: array of string
 *Return: length
 */
int _strlen(const char *str)
{
	int a = 0;

	while (str[a])
	{
		a++;
	}
	return (a);
}
/**
 * add_node - function to add new node
 * @head: head of linked list
 * @str: string to inject inside linked list
 * Return: pointer to head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = _strlen(str);
	node->next = *head;
	*head = node;
	return (node);
}
