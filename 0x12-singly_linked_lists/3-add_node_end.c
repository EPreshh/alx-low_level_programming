#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: Double pointer to the head of the list
 * @str: String to be duplicated and added to the new node
 *
 * Return: Address of the new element, or NULL if failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last;
	char *new_str;
	unsigned int len = 0;

	new_str = strdup(str);
	if (new_str == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_str);
		return (NULL);
	}

	new_node->str = new_str;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new_node;
	}
	return (new_node);
}
