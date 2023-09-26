#include "lists.h"

/**
 * insert_nodeint - insert new node
 * @head: head pointer
 * @idx: index
 * @n: value
 *
 * Return: address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nd, *nn = malloc(sizeof(listint_t));
	unsigned int t = 0;

	if (!head || !nn)
		return (NULL);

	nn->n = n;
	nn->next = NULL;
	if (!idx)
	{
		nn->next = *head;
		*head = nn;
		return (nn);
	}
	nd = *head;
	while (nd)
	{
		if (t == idx - 1)
		{
			nn->next = nd->next;
			nd->next = nn;
			return (nn);
		}
		t++;
		nd = nd->next;
	}
	free(nn);
	return (NULL);
}
