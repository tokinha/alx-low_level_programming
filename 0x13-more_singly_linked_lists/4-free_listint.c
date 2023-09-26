#include "lists.h"

/**
 * free_listint - free list of ints
 * @head: head pointer
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *nd;

	while (head)
	{
		nd = head;
		head = head->next;
		free(nd);
	}
}
