#include "lists.h"

/**
 * delete_nodeint - delete node
 * @head: head node
 * @index: index
 *
 * Return: 1 on success, -1 on failure
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nd, *pn;
	unsigned int t = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		nd = *head;
		*head = (*head)->next;
		free(nd);
		return (1);
	}
	nd = *head;
	while (nd)
	{
		if (t == index)
		{
			pn->next = nd->next;
			free(nd);
			return (1);
		}
		t++;
		pn = nd;
		nd = nd->next;
	}
	return (-1);
}
