#include "shell.h"

/**
 * shell - Entry point
 * description: main function of shell
 * Return: 0
 */

int shell(void)
{
	size_t len = 0;
	char *line = NULL;
	ssize_t read;

	while (1)
	{
			write(1, "(mcpshell) ", 4);

		read = getline(&line, &len, stdin);

		parser(line);
	}
}
