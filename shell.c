#include "shell.h"
/**
 * main - entry point
 * 
 * Return: 0
 */

int prompt(int n)
{
	if(!isatty(STDIN_FILENO))
		n = 0;
	if (isatty(STDIN_FILENO))
		write(1, "(mcpshell) ", 10);
	return (n);
}

int shell(void)
{
	char *line;
	size_t len;
	char read;
	char **argv = NULL;

	while (1)
	{
		n = prompt(n); //llama a una funcion que imprime el prompt
		read = getline(&line, len, stdin);
	}
	return (0);
}