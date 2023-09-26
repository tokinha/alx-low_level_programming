#include "lists.h"

/**
 * reverse_listint - reverses
 * @head: head node
 *
 * Return: address
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nd = NULL, *next = NULL;

	if (!head || !*head)
		return (NULL);

	nd = *head;
	*head = NULL;
	while (nd)
	{
		next = nd->next;
		nd->next = *head;
		*head = nd;
		nd = next;
	}
	return (*head);
}
