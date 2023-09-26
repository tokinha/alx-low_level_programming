#include "lists.h"

/**
 * get_nodeint_at_index - return node
 * @head: head pointer
 * @index: index
 *
 * Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *n;
	unsigned int t;

	for (n = head, t = 0; n && t < index; n = n->next, t++)
		;
	return (n);
}
