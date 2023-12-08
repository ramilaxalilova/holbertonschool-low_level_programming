#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head of list
 * @index: - index of the node
 * Return: nth node or NULL if fail
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head && index != 0)
	{
		head = head->next;
		index--;
	}
	if (head && index == 0)
		return (head);
	return (NULL);
}
