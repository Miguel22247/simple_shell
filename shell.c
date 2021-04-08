#include "shell.h"
/**
 * shell - entry point
 * 
 * Return: 0
 */
int shell(void)
{
	size_t len = 0;
	char *line = NULL;

	while (1)
	{
		write(1, "(mcpshell) ", 10);
		getline(&line, &len, stdin);
	}
	return (0);
}