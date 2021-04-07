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
	ssize_t endof = 0;
	int read;
	char**argv = NULL;

	while (1)
	{
		if(isatty(STDIN_FILENO))
			write(1, "(mcpshell) ", 10);
		read = getline(&line, &len, stdin);
		if ((exit_hash(endof, argv)) == 0)
		{
			break;
		}
	}
	return (0);
}

