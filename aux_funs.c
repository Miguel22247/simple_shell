#include "shell.h"
/**
 * free_tokens - free all the tokens
 * @tokens: token
 * return: free all the tokens
 */
void free_tokens(char **tokens)
{
	int i = 0;

	while (tokens[i] != NULL)
	{
		free(tokens[i]);
		i++;
	}

	free(tokens);
}