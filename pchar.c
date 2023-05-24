#include "monty.h"
/**
 * pchar - prints the char at the top of the stack,
 * followed by a new line
 * @head: stack head
 * @line_number: line_number
 * Return: no return
*/
void pchar(stack_t **head, unsigned int line_number)
{
	stack_t *current;

	current = *head;

	if (!current)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		terminate(*head);
	}
	if (current->n > 127 || current->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		terminate(*head);
	}
	printf("%c\n", current->n);
}
