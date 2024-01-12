#include "main.h"

/**
 * exec - funtion to execute user input
 * @argsC: array to store user input
 * @argv: function to check for argument
 * @env: environment to a path
 * Return: return 0 on success
 */
int exec(char *argsC[], char **argv, char **env)
{
	pid_t pid;
	int exe, status;

	pid = fork();	
	

	if (pid == -1)
	{
		perror("execution error");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		char *path = getenv_path(env);
		if (path == NULL)
		{
			fprintf(stderr, "PATH environment variable not found\n");
			exit(EXIT_FAILURE);
		}
		exe = execve(argsC[0], argsC, env);
			if (exe == -1)
			{
				perror(argv[0]);
				exit(EXIT_FAILURE);
			}
	}
	else
		waitpid(pid, &status, 0);
	return (0);

}
