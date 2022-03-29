#include <unistd.h>

int main(void)
{
	write(STDOUT_FILENO, "$ ", 2); /* need to include something that waits 
					* for user input and something that
					* prints the newline
					*/
	return (0);
}
