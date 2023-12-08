#include "lists.h"

/**
 * sum_dlistint - function with one argument
 * @head: head pointer to double linked list
 * Return: 0 if empty or sum of n value
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
