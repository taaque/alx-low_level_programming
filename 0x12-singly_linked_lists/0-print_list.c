#include <stdio.h>
#include "lists.h"

/**
* print_list - list all the elements list linked to it
* @a: pointer the list_t  to print
*
* Return: printed node
*/
	size_t print_list(const list_t *a)
{
size_t b = 0;

while (a)
{
if (!a->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", a->len, a->str);
a = a->next;
b++;
}

return (b);
}
