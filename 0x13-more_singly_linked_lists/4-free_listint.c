#include "lists.h"

/**
 * free_listint - programs frees a listint list
 * @head: head of list
 *
 * Return: no return
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
