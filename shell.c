#include "shell.h"
/**
 * interactive_part - Entry point
 * @n: command
 * Return: void
 */

int interactive_part(int n)
{
	if (!isatty(STDIN_FILENO))
		n = 0;
	if (isatty(STDIN_FILENO))
		write (1, "($)", 4);
	return (n);
}


/**
 * main - Entry point
 * description: main function of shell
 * Return: 0
 */

int shell(void)
{
	size_t n = 1;
	char *line = NULL;
	ssize_t read = 0;
	
	while (1)
	{
		n = interactive_part(n);
		read = getline(&line, &len, stdin);
	}
	return (0);	
}
