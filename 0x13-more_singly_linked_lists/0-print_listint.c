#include "lists.h"

/**
 * print_listint - prints elements to a linked list
 * @a: linked list is typed listint_t to print
 *
 * Return: nodes numbers bieng returned
 */
size_t print_listint(const listint_t *a)
{
size_t num = 0;

while (a)
{
printf("%d\n", a->n);
num++;
a = a->next;
}

return (num);
}
