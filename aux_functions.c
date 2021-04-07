#include "shell.h"
/**
 * exit_hash - Function tha handles different cases where the user want to exit
 * @endof: eof
 * @argv: command
 * Return: 0
 */
int exit_hash(ssize_t endof, char *argv)
{
	if (endof == EOF)
	{
		write(1, '\n', 1);
		return (0);
	}
	if (_strcmp(argv, "exit") == 0)
		return (0);
	return (1);
}
/**
 * free - Sets some variables to frees allocs
 * @line: eof
 * @argv:
 * Return: void
 */
void free(char *line, char **argv)
{
	free(line);
	line = NULL;
	free(argv);
}