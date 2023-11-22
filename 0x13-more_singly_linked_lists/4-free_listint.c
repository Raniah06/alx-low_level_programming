#include "lists.h"

/**
 * free_listint - free a `listint_t` list
 * @head: head of linked list
 */
void free_listint(listint_t *head)
{

while (head != NULL)
{
head = head->next;
free(head);
}
}
