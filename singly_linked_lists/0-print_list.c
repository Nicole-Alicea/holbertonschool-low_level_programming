#include "lists.h"

/**
 * print_list - This function prints all the elements of a list_t list
 * @h: Pointer to a list_t list
 *
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n;

	for (n = 0; h != NULL; n++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);
	
	}
	h = h->next;
	}
	return (n);
}
