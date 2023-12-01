#include "lists.h"

/**
 * insert_dnodeint_at_index - This function inserts a new node
 * at a given position
 * @h: Double pointer to head
 * @idx: Index of the list where the new node should be added; starts at 0
 * @n: The value of the new node
 * Return: The address of the new node or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new_node;
	new_node = malloc(sizeof(dlistint_t));

	if(!new)
		return (NULL);
	new_node-> = n;
	temp = *h;
	if (!temp)
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
		return (new_node);
	if (idx == 0)
		new_node->prev = NULL;
		new_node->next = temp;
		temp->prev = new_node;
		*h = new_node;
		return (new_node);
	for ( ; idx > 1 && temp->next; idx--)
		temp = temp->next;
	if (idx > 1 && !temp->next)
		return (NULL);
	new_node->prev = temp;
	new_node->next = temp->next ? temp->next : NULL;
	if (temp->next)
		temp->next->prev = new_node;
	temp->next = temp->next && idx > 1 ? NULL : new_node;
	return (new_node);
}
