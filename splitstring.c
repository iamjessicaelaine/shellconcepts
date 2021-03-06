#include <stdio.h>
#include <string.h>

char *splitstring(char *str);

/**
 * splitstring - splits a string & returns an array of each word of the string
 * @str: the string to be split
 * Return: an array of each word of the string
 */

char *splitstring(char *str)
{
	char delim[] = " ";
	char *ptr = strtok(str, delim);

	while (ptr != NULL)
	{
		ptr = strtok(NULL, delim);
	}
	return (ptr);
}
