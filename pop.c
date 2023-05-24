#include "monty.h"
/**
 * pop - prints the top
 * @head: stack head
 * @line_number: line_number
 * Return: no return
*/
void pop(stack_t **head, unsigned int line_number)
{
	stack_t *current;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		terminate(*head);
	}
	current = *head;
	*head = current->next;
	free(current);
}
