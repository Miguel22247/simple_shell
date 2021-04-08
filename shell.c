#include "shell.h"
/**
 * prompt - Function that prints the prompt
 * @n: command
 * Return: void
 */

int prompt(void)
{
	if (isatty(STDIN_FILENO))
	{
		write (1, "($)", 4);
	}
	return (0);
}


/**
 * main - Entry point
 * description: main function of shell
 * Return: 0
 */
/*
int shell(void)
{
	size_t len = 0, n = 1;
	char *line = NULL;
	ssize_t read = 0;
	
	while (1)
	{
		n = prompt(n);
		read = getline(&line, &len, stdin);
	}
} */
