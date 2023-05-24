#include "monty.h"
/**
 * divide - divides the top two elements of the stack.
 * @head: stack head
 * @line_number: line_number
 * Return: no return
*/
void divide(stack_t **head, unsigned int line_number)
{
	stack_t *current;
	int len = 0, result;

	current = *head;
	len = stack_size(*head);

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		terminate(*head);
	}
	if (current->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		terminate(*head);
	}
	result = current->next->n / current->n;
	current->next->n = result;
	*head = current->next;
	free(current);
}
