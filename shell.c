#include "shell.h"

/**
 * main - Entry point
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
		if (isatty(STDIN_FILENO))
			write(1, "(mcpshell) ", 4);

		read = getline(&line, &len, stdin);

	}
}
