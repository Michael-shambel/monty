#include "monty.h"

/**
 *n_add - this is node help to add
 *@stack: Double pointer to the top of the stack.
 *@line_number: Line number in the Monty file
 *
 * Return: nothing
 *
 */
void n_add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n += (*stack)->n;
	*stack = (*stack)->next;
	free(temp);
	(*stack)->prev = NULL;
}
