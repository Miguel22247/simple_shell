#include "shell.h"
/**
 * prompt - Entry point
 * @n: command
 * Return: void
 */
int exit_hash(ssize_t endof, char **argv, int flag)
{
	int n = 0;

	if (endof == EOF)
	{
		if(flag == 1)
			write(1, '\n', 2);
		return (0);
	}
}
int prompt(int n)
{
	if (!isatty(STDIN_FILENO))
	{
			n = 0;
	}
	if (isatty(STDIN_FILENO))
	{
		write (1, "(mcpshell)", 10);
	}
	return (n);
}

/**
 * main - Entry point
 * description: main function of shell
 * Return: 0
 */

int shell(void)
{
	size_t len = 0, n = 1;
	char *line = NULL;
	ssize_t read = 0;
	
	while (1)
	{
		n = prompt(n); // calls a function that prints the prompt
		read = getline(&line, &len, stdin);
	}
}
