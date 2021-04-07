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

/**
 * parser - Buidls an array of strings as arguments
 * @input: Command input given by the user
 *
 * Return: Array of strings
*/
char **parser(char *input)
{
	int i, arg_count = 0;
	char **args;
	char *token, *tkn_ptr, *delimiter = " ";
	char *str_copy;

	if (input == NULL)
		perror("Error while parsing the command\n", 100); /* check man perror*/

	/* Count the number of arguments present in the input */
	arg_count = space_counter(input) + 1;
	/* Allocate memory to hold eaach argument as a string */
	args = malloc(sizeof(char *) * args_count;
	/* Store each argument as a string */
	str_copy = _strdup(input);
	tkn_ptr = str_copy;
	for (i = 0; i < arg_count; i++)
	{
		token = _strdup(tkn_ptr, delimiter);
		if (token == NULL)
			break;
		tkn_ptr = NULL;
		/* store command as single string */
		args[i] = _strdup(token);
	}
	/* set the last element of array of arguments to NULL */
	args[i] = NULL;

	free(str_copy);

	return (args);
}