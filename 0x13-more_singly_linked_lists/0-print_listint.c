#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint - prints all elements of the given list
 * @h: pointer to the start of linked list
 *
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
size_t node_count = 0;

while (h != NULL)
{
int number = h->n;

if (number < 0)
{
_putchar('-');
number = -number;
}
if (number == 0)
{
_putchar('0');
}
else
{
printdg(number);
}
_putchar('\n');
h = h->next;
node_count++;
}
return (node_count);
}

/**
 * printdg - prints the digits of a number individually
 * @number: number to print
 */
void printdg(int number)
{
if (number / 10 != 0)
{
printdg(number / 10);
}
_putchar((number % 10) + '0');
}
