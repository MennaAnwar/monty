#include "monty.h"

/**
 * stack_size - gets size of stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/

int stack_size(stack_t *head)
{
	int size = 0;
	stack_t *h;
	h = head;

	while (h)
	{
		h = h->next;
		size++;
	}
	return (size);
}
