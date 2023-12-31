#include "lists.h"
/**
 * find_listint_loop - finds a loop in a linked list
 * @head: linked list to search for
 *
 * Return: adress of the node where the loop starts,
 *  or NULL
 *  By : Mpagi Jolly/Jojo-Programming
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head;
listint_t *fast = head;

if (!head)
	return (NULL);
while (slow && fast && fast->next)
{
fast = fast->next->next;
slow = slow->next;
if (fast == slow)
{
slow = head;
while (slow != head)
{
slow = slow->next;
fast = fast->next;
}
return (fast);
}
}
return (NULL);
}
