#include "lists.h"
/**
 * sum_dlistint - find sum of elements in the list
 * @head: head of linked list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	while (head)
	{

		sum += head->n;
		head = head->next;
	}
	return (sum);
}

