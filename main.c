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
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	open_monty_and_instruct(argv[1]);

	return 0;
}
