#include "lists.h"
/**
 * pop_listint - Deletes a head node of a list.
 * @head: pointer to start of a list.
 * Return: Return head's node data or 0 if list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *newhead;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	else

		data = (*head)->n;
	newhead = (*head)->next;
	free(*head);

	*head = newhead;

	return (data);
}
