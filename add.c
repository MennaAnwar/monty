#include "monty.h"
/**
 * add - adds the top two elements of the stack.
 * @head: stack head
 * @line_number: line_number
 * Return: no return
*/
void add(stack_t **head, unsigned int line_number)
{
	stack_t *current;
	int len = 0, sum;

	current = *head;
	len = stack_size(*head);

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		terminate(*head);
	}

	sum = current->n + current->next->n;
	current->next->n = sum;
	*head = current->next;
	free(current);
}
