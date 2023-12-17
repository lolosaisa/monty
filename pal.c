#include "monty.h"
/**
 * l_pall - Function implements the pall opcode
 * @stack: the linear data structure
 * Return: no return
 */
void l_pall(Stack *stack)
{
	int a;
	
	for (a = stack->top; a >= 0; a--)
	{
		printf("%d\n", stack->stack[a]);
	}
}
