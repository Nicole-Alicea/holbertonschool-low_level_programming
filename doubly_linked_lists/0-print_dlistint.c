#include "lists.h"

/**
 * print_dlistint - This function prints all the elements of a dlistint_t list
 * @h: Pointer to head
 *
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

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
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}

	return (n);
}
