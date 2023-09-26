#include "lists.h"

/**
 * pop_listint - pop head node
 * @head: head node
 *
 * Return: value of popped node
 */
int pop_listint(listint_t **head)
{
	listint_t *n;
	int t;

	if (!head || !*head)
		return (0);

	n = (*head)->next;
	t = (*head)->t;
	free(*head);
	*head = n;
	return (t);
}
