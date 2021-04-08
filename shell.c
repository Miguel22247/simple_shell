#include "shell.h"
/*
int exit_hsh(ssize_t eof, char **argv, int flag)
{
	int i = 0;

	if (eof == EOF)
	{
		if(flag == 1)
			_putchar('\n');
		return (0);
	}
	if (argv[0])
	{
		if (_strcmp(argv[0], "exit") == 0)
			return (0);

		if ((_strcmp(argv[0], "env") == 0) && argv[1] == NULL)
		{
			for (i = 0; environ[i] != '\0' ; i++)
				_puts(environ[i]);
		}
	}
	return (1);
}
*/
int prompt(int n)
{
	if(!isatty(STDIN_FILENO))
		n = 0;
	if (isatty(STDIN_FILENO))
		write(1, "(mcpshell) ", 10);
	return (n);
}
/**
 * shell - entry point
 * 
 * Return: 0
 */
int shell(void)
{
	size_t len = 0, n = 1;
	ssize_t read = 0;
	char *line = NULL;

	while (1)
	{
		n = interactive(n);
		read = getline(&line, &len, stdin);
	}
}