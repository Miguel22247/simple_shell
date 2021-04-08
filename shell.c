#include "shell.h"
/**
 * prompt - Function that prints the prompt
 * @n: command
 * Return: void
 */

int prompt(int n)
{
	if (!isatty(STDIN_FILENO))
	{
			n = 0;
	}
	if (isatty(STDIN_FILENO))
	{
		write(1, "(mcpshell) ", 10);
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
		n = prompt(n); /* calls a function that prints the prompt */
		read = getline(&line, &len, stdin); /*gets the input*/
	}
}
