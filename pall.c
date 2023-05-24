#include "monty.h"
/**
 * pall - prints the stack
 * @head: stack head
 * @line_number: no used
 * Return: no return
*/
void pall(stack_t **head,
	__attribute__((unused)) unsigned int line_number)
{
	stack_t *current;

	current = *head;

	if (current == NULL)
		return;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
