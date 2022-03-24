#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments
 * @ac: the number of items in av
 * @av: a NULL terminated array of strings
 * Return: 0
 */

int main(int ac, char **av)
{
	int x = 1; /* moves us through our array of strings */

	while (av[x] != NULL)
	{
		printf("%s\n", av[x]);
		x++;
	}
	return (0);
}
