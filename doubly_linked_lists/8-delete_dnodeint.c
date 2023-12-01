#include "lists.h"

/**
 * delete_dnodeint_at_index - This function deletes the node at index
 * index of a dlistint_t linked list
 * @head: Double pointer to head
 * @index: Index of the node that should be deleted; starts at 0
 *
 * Return: 1 if it succeeds or -1 if it fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp_delete, *temp_head;

	if (!head || !*head)
	{
		return (-1);
	}
	temp_head = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(temp_head);

		return (1);
	}
	for ( ; index > 1 && temp_head && temp_head->next; index--)
		temp_head = temp_head->next;
	if (!temp_head->next)
		return (-1);
	temp_delete = temp_head->next;
	temp_head->next = temp_delete->next ? temp_delete->next : NULL;
	if (temp_delete->next)
		temp_delete->next->prev = temp_head;
	free(temp_delete);
	return (1);
}
