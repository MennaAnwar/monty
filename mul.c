#include "monty.h"
/**
 * mul - multiplies the top two elements of the stack.
 * @head: stack head
 * @line_number: line_number
 * Return: no return
*/
void mul(stack_t **head, unsigned int line_number)
{
	stack_t *current;
	int len = 0, result;

	current = *head;
	len = stack_size(*head);

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		terminate(*head);
	}

	result = current->next->n * current->n;
	current->next->n = result;
	*head = current->next;
	free(current);
}
