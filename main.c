#include "monty.h"

/**
 *main - the entry of the project
 *@argc: argument counter
 *@argv: argumet vector which is monty file
 *
 * Return: null
 */
int main(int argc, char *argv[])
{
	instruction_t instructions[] = {
		{"push", &n_push},
		{"pall", &n_pall},
		{"pint", &n_pint},
		{"pop", &n_pop},
		{"swap", &n_swap},
		{"add", &n_add},
		{"nop", &n_nop},
		{"sub", &n_sub},
		{NULL, NULL}
	};
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	if (exec_monty(argv[1], instructions) != EXIT_SUCCESS)
	{
		return (EXIT_FAILURE);
	}
	return (0);
}
