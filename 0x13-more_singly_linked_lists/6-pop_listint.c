#include "lists.h"

/**
 * pop_listint - pop head node
 * @head: head node
 *
 * Return: value of popped node
 */
int pop_listint(listint_t **head)
{
	listint_t *nd;
	int n;

	if (!head || !*head)
		return (0);

	nd = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = nd;
	return (n);
}
