#include "lists.h"
#include <stdlib.h>
#include <string.h>
int _strlen(const char *str)
{
        int a = 0;
        while(str[a])
        {
                a++;
        }
	return (a);
}
/**
 * list_len - function
 * @h: linked
 * Return: len
 */

list_t *add_node(list_t **head, const char *str)
{
        list_t *node;

        node = malloc(sizeof(list_t));
        if (node == NULL) return (NULL);
        node->str = strdup(str);
        node->len = _strlen(str);
        node->next = *head;
	*head = node;
        return (node);
}
