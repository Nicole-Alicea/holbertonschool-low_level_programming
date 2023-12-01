#include "lists.h"

/**
 * insert_dnodeint_at_index - This function inserts a new node
 * at a given position
 * @h: Double pointer to head
 * @idx: Index of the list where the new node should be added; starts at 0
 * @n: The value of the new node
 *
 * Return: The address of the new node or NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL;

	if (h == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	if (idx > 1 && *h != NULL)
	{
		return (insert_dnodeint_at_index(&((*h)->next), idx - 1, n));
	}

	if (idx > 1 || *h == NULL)
	{
		return (NULL);
	}

	if ((*h)->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		dprintf(2, "Error\n");

		return (NULL);
	}

	new_node->n = n;
	new_node->next = (*h)->next;
	new_node->prev = (*h);
	(*h)->next->prev = new_node;
	(*h)->next = new_node;

	return (new_node);
}
