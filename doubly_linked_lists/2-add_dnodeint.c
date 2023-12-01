#include "lists.h"

/**
 * add_dnodeint - This function adds a new node at the beginning of a
 * dlistint_t list
 * @head: Double pointer to head
 * @n: Value that will be contained in the new node
 *
 * Return: The address of the new element or NULL if it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	temp = *head;
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = temp;

	if (temp != NULL)
	{
		temp->prev = new_node;
	}

	*head = new_node;

	return (new_node);
}
