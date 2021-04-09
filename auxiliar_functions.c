#include "shell.h"
/**
 * 
 * @n: sets the prompt value
 * Return: the prompt or 0
 */
int parte_interactiva (int n)
{
	if (!isatty(STDIN_FILENO))
		n = 0;	
	if (isatty(STDIN_FILENO))
		write(1,"(mcpshell) ", 10);
	return (n);
}