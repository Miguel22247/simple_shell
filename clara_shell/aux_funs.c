#include "shell.h"

/**
 * _puts - outputs a line of stream
 * @str: inherited from main
 * Return: 0
 */

void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{_putchar(str[i]);
}
_putchar('\n');
}


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

