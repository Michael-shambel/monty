#include "monty.h"
/**
 *n_push - push the input number
 *@stack: linked node
 *@line_number: argumetn line
 *
 * Return: nothing
 */
void n_push(stack_t **stack, unsigned int line_number)
{
	int x = 0;
	char *opcode = strtok(NULL, " \n\t");
	int result = atoi(opcode);
	stack_t *new_node = malloc(sizeof(stack_t));

	if (opcode == NULL)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	while (opcode[x] != '\0')
	{
		if (!isdigit(opcode[x]) && opcode[x] != '-')
		{
			fprintf(stderr, "L%u: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
		x++;
	}

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = result;
	new_node->prev = NULL;

	if (*stack == NULL)
	{
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
	}
	*stack = new_node;
}
