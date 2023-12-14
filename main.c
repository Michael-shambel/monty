#include "monty.h"
/**
 *main - the entry of the project
 *@argc: argument counter
 *@argv: argumet vector which is monty file
 *
 * Return: null
 */
instruction_t instructions[] = {
    {"push", &n_push},
    {"pall", &n_pall},
    {NULL, NULL}
};
int main(int argc, char *argv[])
{
	char temp[300];
        unsigned int line_number = 1;
	stack_t *stack = NULL;
	FILE *file;
	int x = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

       file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}

	while (fgets(temp, sizeof(temp), file) != NULL)
	{
		char *opcode = strtok(temp, " \n\t");
		if (opcode == NULL || opcode[0] == '#')
		{
			line_number++;
			continue;
		}
		
		for (x = 0; instructions[x].opcode != NULL; x++)
		{
			if (strcmp(opcode, instructions[x].opcode) == 0)
			{
				instructions[x].f(&stack, line_number);
				break;
			}
		}
		if (instructions[x].opcode == NULL)
		{
			fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
			fclose(file);
			return EXIT_FAILURE;
		}
		line_number++;
	}
	fclose(file);
	return (0);
}
