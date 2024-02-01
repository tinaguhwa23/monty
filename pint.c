#include "monty.h"

/**
 * func_pint - ...
 * @head: This is the stack's head
 * @line_number: line_number
 * Return: nothing
*/
void func_pint(stack_t **head, unsigned int line_number)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
