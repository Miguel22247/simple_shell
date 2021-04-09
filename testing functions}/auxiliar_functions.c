#include "shell.h"
/**
 * exit_hash - Exit the shell
 * Return: exit
 */
int exit_hash(ssize_t endof, char **argv, int flag, char *line)
{
	int i = 0;

	if (endof == EOF)
	{
		if (flag == 1)
			_putchar('\n');
		return (0);
	}
	if (argv[0])
	{
		if (_strcmp(argv[0], "exit") == 0)
		{
			if (argv[1])
			{
				i = _atoi(argv[1]);
				free_all(line, argv);
				exit(i);
			}
			else
				return (0);
			
		}
		
	}
	
/*
	if(line == "exit" || endof == EOF)
	{
		_putchar('\n');
		return (0);
	}*/
}

/**
 * 
 * @n: sets 
 * Return: the prompt or 0
 */
int parte_interactiva (int n)
{
	if (!isatty(STDIN_FILENO))
		n = 0;	
	if (isatty(STDIN_FILENO))
		write(1,"(mcpshell) ", 10);
	return (n);