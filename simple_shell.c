#include "main.h"

/**
 *main - start of the  program
 *@argsC: receive user input as arguments
 *@argv: user argument
 *@env: function to give environment to a path
 *
 *Return: return 0 on success
 */

int main(int argsC, char **argv, char **env)
{
	(void) argsC;

	while (1)
	{
		readInput(argv, env);
	}

	return (0);
}
