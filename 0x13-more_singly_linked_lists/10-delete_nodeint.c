#include "lists.h"
/**
 *delete_nodeint_at_index - deletes a node at a specified index
 *in a linked list
 *@head: pointer to the memory location of the head pointer
 *@index: index of element to delete
 *
 *Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int nodes = 0;

	listint_t *index1, *index2;

	index1 = *head;
	index2 = *head;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(index2);
		return (1);
	}

	while (nodes != index)
	{
		if (nodes == index - 1)
		{
			index1 = index2;
		}
			index2 = index2->next;

		if (index2 == NULL)
		{
			return (-1);
		}
		nodes++;
	}
	index1->next = index2->next;
	free(index2);
	return (1);
}
