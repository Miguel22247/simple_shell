#include "shell.h"
/**
 * main - entry point
 * 
 * Return: 0
 */
int shell(char argc __attribute__ ((unused)), char *argv[])
{
	char *line;
	size_t len;
	int read;
	char**argv = NULL;

	while (1)
	{
		if(isatty(STDIN_FILENO))
			write(1, "(mcpshell) ", 10);
		read = getline(&line, &len, stdin);
		
		/*if (read == EOF)
		{
			exit(EXIT_SUCCESS);
		}*/

		if (_strcmp(argv[0], "exit") == 0) || read == EOF)
			return (0); 
	}
	return (0);
}