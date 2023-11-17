#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the pointer to the head of the list
 * @str: string to insert
 *
 * Return: address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;

if (str == NULL)
return (NULL);
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = _strlen(str);
new_node->next = *head;
*head = new_node;
return (new_node);
}
/**
 * _strlen - calculates the length of a string
 * @str: string to use
 *
 * Return: length of the string
 */
size_t _strlen(const char *str)
{
size_t length = 0;

while (str[length] != '\0')
length++;
return (length);
}
