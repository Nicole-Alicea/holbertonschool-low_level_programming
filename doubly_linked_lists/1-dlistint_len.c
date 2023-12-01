#include "lists.h"

/**
 * dlistint_len - This function returns the number of elements in a
 * linked dlistint_t list
 * @h: Pointer to head
 *
 * Return: Number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t m = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h->prev != NULL)
	{
		h = h->prev;
	}

	while (h != NULL)
	{
		m++;
		h = h->next;
	}

	return (m);
}
