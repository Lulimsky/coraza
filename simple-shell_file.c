 #include "main.h"

 /*
 * my_shell - execute a simple shell
 * Return: nothing
 */

int my_shell(void)
{
	char *buffer;
/* we use buffer to use the getline() function to save the characters input */
	size_t bufsize = 32;
	size_t characters;

	buffer = malloc(bufsize * sizeof(char));
	printf("$");
	characters = getline(&buffer, &bufsize, stdin);
/* it gets the input prompt */

	printf("%lu characters were read.\n", characters);
	printf("you typed: %s\n", buffer);
	return (0);
}
