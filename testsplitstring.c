\1;95;0c#include <stdio.h>
#include <string.h>

char *splitstring(char *str);

/**
 * main - splits a string and returns an array of words
 *
 * Retun: always 0
 */

int main(void)
{
	char str[] = "testing the string split";
	char *ptr; /* return from strtok */

	ptr = splitstring(str);
	printf("[%s]\n", ptr);

	return (0);
}

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
