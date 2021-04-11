#include "shell.h"
/**
 * shell - Entry point
 * description: main function of shell
 * Return: 0
 */

int main (int argc, char **argv)
{
	/* command loop */
	shell_loop();

	return (EXIT_SUCCESS);
}

/**
* shell_loop - FUN
* Return: 0
*/

int shell_loop(void)
{
	char *line;
	size_t len;
	int read, i;
	
	/* Command loop */
	while (1)
	{
		/* Prompt */
		_puts("(mcpshell) ");

		/* Read line, getline allocates mem */
		read = getline(&line, &len, stdin);

		/* check mem */
		if(!line)
			exit(0);

		/* getline returns -1 if failed, including eof condition */
		if (read == -1)
		{
			free(line);

			if (issaty(STDIN_FILENO) != 0)
				exit(EXIT_SUCCESS);
			else {
				perror("Error");
				exit(EXIT_FAILURE);
			}
		}

		/* change last position for a null byte (because getline doesn't) */
		if (line[read - 1] == '\n' || line[read - 1] == '\t')
			line[read - 1] = '\0';


		/* parser funcion: separates different arguments form stream*/
		/* split_line(line); */

		/* execute */

		printf("%s", line);
	}
	free(line); /* outside of loop? */
	return (0);
}


/**
* split_line - parser
* @line: line
* Return: tokens
*/

char *split_line(char *line)
{
	int position = 0;
	const char s[2] = " ";
	char *token;
	char **tokens = malloc(BUFSIZE * sizeof(char*));

	/* border case */
	if (!tokens) {
		write(STDERR_FILENO, "allocation error", 17);
		exit(EXIT_FAILURE);
	}

	/* get the first token */
	/* token = strotk(line, s);   */
	/**
	* strtok return pointers to within the string you give it, 
	* and place \0 bytes at the end of each token 
	*/

	/* walk through other tokens */
	while (token != NULL) {
		tokens[position] = token;
		position++; 
	}
	/* reallocate if necessary? */

	tokens[position] = NULL;
	return (token);
}

/**
*
*
*/

int execute(char **args)
{
	pid_t pid, ppid;
	int status;

	pid = fork();
	/* if (pid == 0) */
		/* child process */
}

