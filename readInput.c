#include "main.h"

/**
 * readInput- Function to receive user input
 * @argv: an arry of  charaters
 * @env: environmental path
 *
 * Return: return characters read  from the  starndard input in number
 */

int readInput(char **argv, char **env)
{
	size_t i = 0;
	char *line = NULL, *argsC[MAX_ARG], *user_input;
	int size;

	size = getline(&line, &i, stdin);
	if (size == -1)
	{
		if (feof(stdin))
		{
			free(line);
			exit(0);
		}
		else
		{
			perror("command  not  found");
			free(line);
		}
	}
	user_input = minusc(line, size);
	tokenize_input(user_input, argsC);
	exec(argsC, argv, env);


	free(line);
	return (size);
}
