#include "lists.h"

/**
 * add_nodeint_end - add node in the tail
 * @head: head pointer
 * @n: value of new node
 *
 * Return: pointer 
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nn = malloc(sizeof(listint_t));
	listint_t *nd;

	if (!head || !nn)
		return (NULL);

	nn->next = NULL;
	nn->n = n;
	if (!*head)
		*head = nn;
	else
	{
		nd = *head;
		while (nd->next)
			nd = nd->next;
		nd->next = nn;
	}
	return (nn);
}
