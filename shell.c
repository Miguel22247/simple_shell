#include "header.h"

int execute(char *args[]);
void env(int argc, char *argv[], char * envp[]);
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
* main - THE LOOP :D
* Return: 0
*/
int main(void)
{
	char *line = NULL;
	char ex[] = "exit";
	size_t len = 1024;
	int read, i = 0;
	char **tokens;
	char env[] = "environment variables"; /*    ?????  */

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
            
            /**
            * isatty returns 1 if fd is an open file descriptor referring to
            * a terminal; otherwise 0 is returned
            */
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
		main();

	/* Compar to "exit" command */
	if (!_strcmp(tokens[0], ex))
	{
		free_tokens(tokens);
		exit(0);
	}
	/* compare to "env" command             ???????? */
	if (!_strcmp(tokens[0], env))
	{
		return(env);
	}


	while (tokens[i] != NULL)
	{
		printf("%s\n", tokens[i]); /* change printf    !!!!!!! */
		free(tokens[i]);
		i++;
	}

	/* execute int execute(char *args[]);                   '?????*/

	free(tokens);

	/* recursion for infinte loop */
	main();
	return (0);
}

void env(int argc, char *argv[], char * envp[])
{
	int i;

	for (i = 0; envp[i] != NULL; i++)
	{
		printf(%s\n, envp[i]);
	}
	
}