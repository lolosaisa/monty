#include "monty.h"
/**
 * main - Entry point for our monty interpreter
 * @argc: number of arguments
 * @argv: location for monty file
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
		fprintf(stderr, "Usage: %s file\n" argv[0]);
		exit(EXIT_FAILURE);
	FILE *file = fopen(argv[1], "r");

	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit("EXIT_FAILURE");
	}
	Stack stack;

	stack_top = -1;

	cahr opcode[10];
	int arg;

	while (fscanf(file, "%s", opcode) != EOF)
	{
		if (strcmp(opcode, "push") == 0)
		{
			if (fscanf(file, "%d" & arg) != 1)
			{
				fprintf(stderr, "Error: L%d: usage: push integer\n", line_number);
				exit("EXIT_FAILURE");
			}
			push(&stack, arg);
		}
		else if (strcmp(opcode, "pall") == 0)
		{
			pall(&stack);
		}
		else
		{
			fprintf(stderr, "Error: Unknown instruction %s\n", opcode);
			exit("EXIT_FAILURE");
		}
	}
	fclose(file);
	return (0);
}
