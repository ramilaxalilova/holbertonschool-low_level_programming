#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * list_len - gives length of listed links
 * @h: The linked list_t list
 *
 * Return: the number of nodes.
*/

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
