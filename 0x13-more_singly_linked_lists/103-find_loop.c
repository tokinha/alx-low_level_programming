#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - find loop
 * @head: head node
 *
 * Return: address of node, NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr, *e;

	if (head == NULL)
		return (NULL);
	for (e = head->next; end != NULL; e = e->next)
	{
		if (e == e->next)
			return (e);
		for (ptr = head; ptr != e; ptr = ptr->next)
			if (ptr == e->next)
				return (e->next);
	}

	return (NULL);
}
