#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *buffer; /* stores what getline reads */
	size_t bufsize = 1024;
	size_t characters;

	buffer = malloc(bufsize * sizeof(char));
	if (buffer == NULL)
	{
		return (0);
	}
	write(STDOUT_FILENO, "$ ", 2);
	characters = getline(&buffer, &bufsize, stdin);
	write(STDOUT_FILENO, "$ \n", 3);
	/* write(STDOUT_FILENO, buffer, characters); */
	free(buffer);
	return (0);
}
