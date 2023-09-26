#include "lists.h"

/**
 * add_nodeint - add node on the top
 * @head:1st node
 * @n: value of new node
 *
 * Return: pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nn = malloc(sizeof(listint_t));

	if (!head || !nn)
		return (NULL);

	nn->next = NULL;
	nn->n = n;
	if (*head)
		nn->next = *head;
	*head = nn;
	return (nn);
}
