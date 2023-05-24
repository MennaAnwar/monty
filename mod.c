#include "monty.h"

/**
 * mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: stack head
 * @line_number: line_number
 * Return: no return
*/
void mod(stack_t **head, unsigned int line_number)
{
	stack_t *current;
	int len = 0, result;

	current = *head;
	len = stack_size(*head);

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		terminate(*head);
	}

	if (current->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		terminate(*head);
	}
	result = current->next->n % current->n;
	current->next->n = result;
	*head = current->next;
	free(current);
}
