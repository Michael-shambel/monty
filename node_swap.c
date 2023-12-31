#include "monty.h"

/**
 * n_swap - Seaps two elements in a stack
 * @line_number: line of the element
 *@stack: pointer to the stack
 * Return: voud
 */

void n_swap(stack_t **stack, unsigned int line_number)
{

	int temp = (*stack)->n;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}
