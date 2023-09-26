#include "lists.h"

/**
 * listint_len - print linkedlist
 * @h: pointer of 1st node
 *
 * Return: size
 */
size_t listint_len(const listint_t *h)
{
	size_t t = 0;

	while (h)
	{
		h = h->next;
		t++;
	}
	return (t);
}
