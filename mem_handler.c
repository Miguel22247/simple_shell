#include "header.h"

/**
 * array_cleaner - Cleans a double pointer
 * @fire: Double pointer to clean (Best name)
 *
 * Return: 1
 */

int arraycleaner(char **fire)
{
	int i;

	for (i = 0; fire[i]; i++)
	{
		free(fire[i]);
	}
	free(fire);

	return (1);
}
