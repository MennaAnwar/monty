#include "monty.h"
/**
 * pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @line_number: line_number
 * Return: no return
*/
void pstr(stack_t **head,
	__attribute__((unused)) unsigned int line_number)
{
	stack_t *current;

	current = *head;

	while (current)
	{
		if (current->n > 127 || current->n <= 0)
			break;

		printf("%c", current->n);
		current = current->next;
	}
	printf("\n");
}
