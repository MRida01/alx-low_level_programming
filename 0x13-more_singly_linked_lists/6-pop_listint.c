#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the pointer to the head of the list
 *
 * Return: head node’s data (n), or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
int data;

listint_t *temp;

if (*head == NULL)
return (0);
data = (*head)->n;
temp = *head;
*head = (*head)->next;
free(temp);
return (data);
}
