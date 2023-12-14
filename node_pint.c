#include "monty.h"
/**
 * n_pint - Function to pint a node
 * @stack: pointer to the stack
 * @line_number: number of the line
 * Return: void
 */
void n_pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
