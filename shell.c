#include "shell.h"

/**
 * shell - Entry point
 * description: main function of shell
 * Return: 0
 */

int shell(void)
{
	char *line;
	size_t len;
	int read = 0;

	while (1)
	{
	write(1, "(mcpshell) ", 10);
	read = getline(&line, &len, stdin);
	}
}
