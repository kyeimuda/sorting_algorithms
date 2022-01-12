#include "sort.h"

/**
 * swap - swaps two nodes of a doubly-linked list
 * @a: first node address
 * @b: address second node address
 * Return: Nothing
 */
void swap(listint_t *a, listint_t *b)
{
if (a->prev)
a->prev->next = b;
if (b->next)
b->next->prev = a;
a->next = b->next;
b->prev = a->prev;
a->prev = b;
b->next = a;

}

/**
 * insertion_sort_list - function that sorts a doubly linked\
 * list of integers in ascending order using the Insertion\
 * sort algorithm
 * @list: address of pointer to head node
 *
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
listint_t *i, *j;

if (!list || !*list || !(*list)->next)
return;
i = (*list)->next;
while (i)
{
j = i;
i = i->next;
while (j && j->prev)
{
if (j->prev->n > j->n)
{
swap(j->prev, j);
if (!j->prev)
*list = j;
print_list((const listint_t *)*list);
}
else
j = j->prev;
}
}
}
