#include <stdio.h>
#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has
 * a cycle in it
 * @list: pointer to the list
 * Return: 0 if there is no cycle,
 * 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *fast;
	listint_t *slow;

	fast = list;
	slow = list;

	while(list && fast && fast->next)
	{
		list = list->next;
		fast = fast->next->next;
		
		if (list == fast)
		{
			slow = fast;
			while(fast->next != list && fast->next != slow)
			{
				fast = fast->next;

				list = list->next;
			}
			return (1);
		}
	}
	return (0);
}
