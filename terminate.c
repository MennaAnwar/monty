#include "monty.h"
/**
 * terminate - frees stack and memory and exits the program
 * Return: no return
*/
void terminate(stack_t *head)
{
	fclose(cmd.file);
	free(cmd.content);
	free_stack(head);
	exit(EXIT_FAILURE);
}
