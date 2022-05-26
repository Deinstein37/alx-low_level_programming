#include "lists.h"
/**
 * sum_listint - Get sum of all list's data.
 * @head: pointer to start of a list.
 * Return:  Return all sum from (n)data.
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	tmp = malloc(sizeof(listint_t));
	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
