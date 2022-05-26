#include "lists.h"
/**
 * free_listint - Frees listin_t linked list.
 * @head: Pointer to the start of a list.
 * Return: Void.
 */
void free_listint(listint_t *head)
{
	listint_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
