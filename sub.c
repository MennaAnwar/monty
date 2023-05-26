#include "monty.h"
/**
  *sub- sustration
  *@head: stack head
  *@line_number: line_number
  *Return: no return
 */
void sub(stack_t **head, unsigned int line_number)
{
	stack_t *current;
	int result, len = 0;

	current = *head;
	len = stack_size(*head);

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		terminate(*head);
	}

	result = current->next->n - current->n;
	current->next->n = result;
	*head = current->next;
	free(current);
}
