#include "monty.h"

/**
 * l_push - Function that adds a node on the staack
 *
 * @stack: the stack involved
 * @value: the node to be added on the stack
 * Return: no return
 */
void l_push(Stack *stack, int value)
{
	if (stack->top == STACK_SIZE - 1)
	{
		fprintf(stderr, "Error: Stsck overflow\n");
		exit(EXIT_FAILURE);
	}
	stack->stack[++stack->top] = value;
}
