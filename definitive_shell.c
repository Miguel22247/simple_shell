#include "shell.h"
/**
 * main - entry point
 * 
 * Return: 0
 */
int shell(void)
{
	char *line;
	size_t len;

	while (1)
	{
	write(1, "(mcpshell) ", 10);
	getline(&line, &len, stdin);
	}
}
