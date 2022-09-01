#include "lists.h"

/**
 * get_dnodeint_at_index - locates a node in a dlistint_t list
 * @head: the head of the dlistint_t list
 * @index: the node to locate
 *
 * Return: NUll if the nodee does not exist
 * otherwise the address of the node located
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
