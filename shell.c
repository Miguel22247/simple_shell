#include "shell.h"
/**
 * main - Function that prints the prompt
 * @n: command
 * Return: 0
 */

int main(void)
{
	if (isatty(STDIN_FILENO))
	{
		write (1, "(mcpshell) ", 4);
	}
	return (0);
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
		n = main(n);
		read = getline(&line, &len, stdin);
	}
}
