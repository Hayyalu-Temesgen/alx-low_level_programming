#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node
 * of a dlistint_t linked list
 * @head: the pointer to the head of the list
 * @index: the index of the node to search for,starting form 0
 * Return: if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
		return (NULL);
	tmp = head;
	while (tmp)
	{
		if (index == size)
			return (tmp);
		size++;
		tmp = tmp->next;
	}
	return (NULL);
}
