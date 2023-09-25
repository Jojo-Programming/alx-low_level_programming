#include "lists.h"
/**
 * free_listint2 -  frees a listint_t list
 * @head: pointer to the liistint_t to be freed
 *  By: Mpagi Jolly/Jojo-Programming
 */
void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL)
	return;

while (*head)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
*head = NULL;
}
