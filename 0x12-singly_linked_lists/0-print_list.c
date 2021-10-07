#include "lists.h"
#include <stdio.h>
/**
 * print_list - function
 * @h: linked
 * Return: len
 */

size_t print_list(const list_t *h)
{
	int n = 0;
	const list_t *ptr = h;

	while (ptr)
	{
		printf("[%d] %s\n", ptr->str != NULL ? ptr->len : 0,
		ptr->str ? ptr->str : "(nil)");
		ptr = ptr->next;
		n++;
	}
	return (n);
}
