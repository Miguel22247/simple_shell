#include "shell.h"

/**
 *  _strcat - concatenates two strings
 * @src: source string = s2 in main
 * @dest: destination string = s1 in main
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
int count = 0, j;
/*
 * stores the length of the destination string on the count variable
*/
while (dest[count] != '\0')
{
++count;
}

/*
* start_shell
*
*/

void start_shell() {
	char *current_path[], *buffer, *prompt;

	while (1)
	{
		current_path = getcwd(buffer, BUFSIZE);
		prompt = _strcat(current_path, PROMPT)
		_putchar(prompt);
	}
}