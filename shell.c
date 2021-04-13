#include "header.h"

int execute(char *args[]);
/**
* split_line - parser
* @line: line
* Return: tokens
*/
char **split_line(char *line)
{
	int position = 0;
	const char s[] = " ";
	char *token;
	char **tokens = malloc(1024 * sizeof(char *));

	/* border case */
	if (!tokens)
	{
		write(STDERR_FILENO, "allocation error", 17);
		exit(EXIT_FAILURE);
		free(line);
	}

	/* get the first token */
	token = _strdup(strtok(line, s));

	/**
	* strtok return pointers to within the string you give it,
	* and place \0 bytes at the end of each token
	*/

	/* walk through other tokens */
	while (token != NULL)
	{
		tokens[position] = token;
		token = _strdup(strtok(NULL, s));
		position++;
	}

	/* reallocate if necessary? */

	tokens[position] = NULL;
	free(line);
	return (tokens);
}


/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument value
 * description: main function of shell
 * Return: 0
 */

int main(int argc __attribute__((unused)), char **argv __attribute__((unused)))
{
	/* command loop */
	shell_loop();

	return (EXIT_SUCCESS);
}

/**
* shell_loop - THE LOOP :D
* Return: 0
*/
int shell_loop(void)
{
	char *line = NULL;
	char ex[] = "exit";
	size_t len = 1024;
	int read, i = 0;
	char **tokens;
	char env[] = "envitonment variables";

	/* Command loop */
	/* Prompt */
	write(1, "(mcpshell) ", 11);

	/* Read line, getline allocates mem */
	read = getline(&line, &len, stdin);

	/* check mem */
	if (!line)
		exit(0);

	/* getline returns -1 if failed, including eof condition */

	if (read == -1)
	{
		free(line);

		if (read == -1)
		{
			free(line);

			if (isatty(STDIN_FILENO) != 0)
				exit(EXIT_SUCCESS);
			else
			{
				perror("Error");
				exit(EXIT_FAILURE);
			}
		}
		if (read == 1)
		{

			write(1, "(mcpshell) ", 10);

		}

		if (isatty(STDIN_FILENO) != 0)
			exit(EXIT_SUCCESS);
		else
		{
			perror("Error");
			exit(EXIT_FAILURE);
		}
	}

	/* change last position for a null byte (because getline doesn't) */
	if (line[read - 1] == '\n' || line[read - 1] == '\t')
		line[read - 1] = '\0';


	/* parser function: separates different arguments from stream*/
	tokens = split_line(line);
	if (!tokens[0])
		shell_loop();
	/* Compar to "exit" command */
	if (!_strcmp(tokens[0], ex))
	{
		free_tokens(tokens);
		exit(0);
	}
	/* compare to "env" command */
	if (!_strcmp(tokens[0], env))
	{
		free_tokens(tokens);
		exit(0);
	}


	while (tokens[i] != NULL)
	{
		printf("%s\n", tokens[i]);
		free(tokens[i]);
		i++;
	}

	/* execute */

	free(tokens);

	/* recursion for infinte loop */
	shell_loop();
	return (0);
}
