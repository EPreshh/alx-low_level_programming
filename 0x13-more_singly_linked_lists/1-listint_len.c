#include "lists.h"

/**
 * listint_len - counts the number of elements in a linked list.
 * @h: pointer to the head of the listint_t list.
 *
 * Return: The number of elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
