#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data (n) of a listint_t linked list.
 * @head: input header pointer
 *
 * Return: nothing
 */
int sum_listint(listint_t *head)
{
	int amount = 0;

	if (head)
	{
		while (head)
		{
			amount += head->n;
			head = head->next;
		}
	}

	return (amount);
}
