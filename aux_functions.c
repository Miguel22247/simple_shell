#include "shell.h"
/**
 * exit_hash - Function tha handles different cases where the user wants to exit
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

/* idea para exit fun
if (comando == "exit")
	exit(EXIT_SUCCESS); */

/**
 * free - Sets some variables to frees allocs
 * @line: eof
 * @argv:
 * Return: void

void free(char *line, char **argv)
{
	free(line);
	line = NULL;
	free(argv);
}
 */
/*

* space_counter - count the spaces between words in the line
* @line: input
* Return: the count of spaces
*/

char space_counter(char *line)
{
	int i, count = 0;

		for (i = 0; line[i] != '\0'; i++)
		{
			if (line[i] == ' ')
				count++;
		}
		return(count);
}