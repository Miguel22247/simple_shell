#include "shell.h"

/**
 * main - Entry point
 * description: main function of shell
 * Return: 0
 */

int main(void)
{
	char *line;
	size_t len;
	/* int read; */

	while (1)
	{
		write(1, "(mcpshell) ", 10);
		getline(&line, &len, stdin);
	}
}

#include "shell.h"

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
	char *token, *tkn_ptr;
	char *str_copy;

	if (input == NULL)
		perror("Error while parsing the command\n"); /* check man perror*/

	/* there is one more word than space count, */
	/* e.g. between 4 words there's 3 spaces */
	arg_count = space_counter(input) + 1;

	/* add one for the null byte */
	args = malloc(sizeof(char *) * (arg_count) + 1);

	/* Store each argument as a string */
	str_copy = _strdup(input);
	tkn_ptr = str_copy;

	for (i = 0; i < arg_count; i++)
	{
		token = _strdup(tkn_ptr);
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

/**
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
		return (count);
}

/**
 * _strdup - String dup.
 * @str: string
 * Return: a pointer to a newly alloc space in memory, containing a copy of str
 */

char *_strdup(char *str)
{
	int i;
	char *p;

	if (str == NULL)
		return (NULL);
	p = malloc(sizeof(char) * (_strlen(str) + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0 ; i < (_strlen(str) + 1) ; i++)
	{
		p[i] = str[i];
	}
	return (p);
}

/**
 * _strlen - entry point
 * @s: string to find length
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	if (s == NULL)
		return (0);
	for (len = 0; *s != 0; s++, len++)
	{
	}
	return (len);
}
