#include "main.h"

/**
 * tokenize_input - Funtion to help toknize command
 * @user_input: a variable to store user command
 * @argsC: storage for token
 * Return: return the  number of  tokens
 */
int tokenize_input(char *user_input, char *argsC[])
{
	char *delim = "", *token;
	int count = 0;

	token = strtok(user_input, delim);

	while (token)
	{
		printf("%s", token);
		argsC[count++] = token;
		token = strtok(NULL, delim);
	}
	argsC[count] = NULL;
	return (count);
}
