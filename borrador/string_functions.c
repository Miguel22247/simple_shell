#include "shell.h"


/**
 * _strcmp - entry point
 * @s1: string 1 to be compared
 * @s2: string 2 to be compared
 * Return: 0 if equal, !0 if different
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b = 0;

	while (*s1 == *s2)
	{
		s1++;
		s2++;
		if (*s1 == '\0' || *s2 == '\0')
			break;
	}
	a = *s1;
	b = *s2;
	return (a - b);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print.
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strcat - entry point
 * @dest: string to append
 * @src: string to be appended
 * Return: concatenaded strings
 */


char *_strcat(char *dest, char *src)
{
	char *start = NULL;

	if ((dest == NULL) && (src == NULL))
		return (NULL);
	start = dest;
	while (*start != '\0')
		start++;
	while (*src != '\0')
		*start++ = *src++;
	*start = '\0';
	return (dest);
}

/**
 *_strcpy - copy a string
 * @dest: destination of the copied string
 * @src: source of the string
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, len = 0;

	len = _strlen(src);
	for (i = 0 ; i <= len ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}



/**
* execute - entry point
* @args: arguments
* Return: an execution or error
*/
int execute(char *args[] __attribute__((unused)))
{
	char *executable_path = NULL;
	char *command = NULL;
	pid_t pid;
	int status;

	command = args[0];
	/* executable_path = path_finder; */

	if (executable_path == NULL)
	{
		not_found(command);
		return (3);
	}

	pid = fork();

	if (pid < 0)
	{
		perror("Error: ");
		return (-1);
	}
	if (pid > 0)
	{
		wait(&status);
	}

	if (pid == 0)
	{
		/* execve(); */
		perror("Error: ");
		exit(1);
	}

	free(executable_path);
	return (0);
}

/**
 * not_found - prints if a command is not found
 * @command: command
 * Return: an error message
 */
int not_found(char *command)
{
	/* write(2, name, strlen(name)); no se que poner aca*/
	write(2, ": 1: ", 5);
	write(2, command, strlen(command));
	write(2, ": not found\n", 12);
}
