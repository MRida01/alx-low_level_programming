#include <stddef.h>
#include "lists.h"

/**
 * listint_len - counts the number of elements in a list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
size_t node_count = 0;

while (h != NULL)
{
h = h->next;
node_count++;
}
return (node_count);
}
