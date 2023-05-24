#include "monty.h"
/**
 * _swap - adds the top two elements of the stack.
 * @head: stack head
 * @line_number: line_number
 * Return: no return
*/
void _swap(stack_t **head, unsigned int line_number)
{
	stack_t *current;
	int len = 0, tmp;

	current = *head;
	len = stack_size(*head);

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		terminate(*head);
	}

	tmp = current->n;
	current->n = current->next->n;
	current->next->n = tmp;
}
