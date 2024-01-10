#include "main.h"
/**
 * getenv_path - Funtion to help grt path From the environment
 * @env: environment Variable
 * Return: return the path executed
 */

char *getenv_path(char **env)
{

	char *delim = "=";
	int i = 0;
	char *pathKey, *pathValue, *path;

	while (env[i] != NULL)
	{
		pathKey = strtok(env[i], delim);
		pathValue = strtok(NULL, delim);

		if (pathKey != NULL && pathValue != NULL && _strcmp(pathKey, "PATH") == 0)
		{
			path = pathValue;
			return (path);

		}
		i++;
	}
	return (NULL);

