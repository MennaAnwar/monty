#include "monty.h"
/**
  *rotl- rotates the stack to the top
  *@head: stack head
  *@line_number: line_number
  *Return: no return
 */
void rotl(stack_t **head, __attribute__((unused)) unsigned int line_number)
{
	stack_t *current = *head, *tmp;

	if (*head == NULL || (*head)->next == NULL)
		return;

	tmp = (*head)->next;
	tmp->prev = NULL;

	while (current->next != NULL)
		current = current->next;

	current->next = *head;
	(*head)->next = NULL;
	(*head)->prev = current;
	(*head) = tmp;
}
