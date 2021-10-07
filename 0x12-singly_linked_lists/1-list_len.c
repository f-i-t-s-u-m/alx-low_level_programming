#include "lists.h"
/**
 * list_len - function
 * @h: linked
 * Return: len
 */

size_t list_len(const list_t *h)
{
	int n = 0;
	const list_t *ptr = h;

	while (ptr)
	{
		ptr = ptr->next;
		n++;
	}
	return (n);
}
