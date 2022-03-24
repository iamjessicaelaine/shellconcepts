#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *buffer;
	size_t bufsize;  /* figure out why setting this to 32 */

	buffer = malloc(sizeof(char)); /* should i still multiply size of char
					* by bufsize? */
	if (buffer == NULL)
	{
		return (0);
	}
	printf("$ ");
	getline(&buffer, &bufsize, stdin);
	printf("%s", buffer);

	return (0);
}
