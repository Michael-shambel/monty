#include "monty.h"
/**
 *n_pop - pop out the top of node
 *@stack: Double pointer to the top of the stack
 *@line_number: Line number in the Monty file
 *
 */
void n_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *top = *stack;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	*stack = (*stack)->next;

	if (*stack != NULL)
	{
		(*stack)->prev = NULL;
	}
	free(top);
}
