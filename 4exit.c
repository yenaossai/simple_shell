#include "shell.h"

#define BUFFER_SIZE 1024
#define MAX_ARGS 10

/**
 * main - exit buit-in
 * Return: 0 (success)
 */

void exit_shell(void)
{
	printf("Exit the shell\n");
	exit(EXIT_SUCCESS);
	if (strcmp(args[0], "exit") == 0)
	{
		exit_shell();
	}
}

/**
 * main - handle the PATH, fork must not be called if cmd is NULL
 * Return: 0 (success)
 */

void exe_cmd(char *command, char **args)
{
	char *path = getenv("PATH");
	char *path_entry;
	char command_path[BUFFER_SIZE];

	while ((path_entry = strtok(path, ":")) != NULL)
	{
		snprintf(command_path, sizeof(command_path), "%s/%s", path_entry, command)
		path = NULL;
	}
		fprintf(stderr, "ERROR\n");
}
/**
 * main - handle command line arguments
 * Return: 0 (success)
 */

void exe_cmd(char *command, char **args)
{
	exe_cmd(args[0], args);
}

/**
 * main - UNIX command line interpreter
 * Return: 0 (success)
 */

int main(void)
{
	char *buf;
	size_t bufsize = BUFFER_SIZE;
	char xters;

	while (1)
	{
		printf("shell");
xters = getline(&buf, &bufsize, stdin);
		if (xters == EOF)
		{
			printf("\n");
			break;
		}

		if (xters > 1)
		{
			buf[xters - 1] = '\0';
			argv[0] = buf;
			argv[1] = NULL;

			pid_t pid = fork()
				if (pid == -1)
				{
					perror("fork");
					exit(EXIT_FAILURE);
				}
			if (pid == 0)
			{
				if (execve(argv[0], argv, NULL) == -1)
				{
					perror("ERROR");
					exit(EXIT_FAILURE);
				}
				else
				{
					wait(NULL);
				}
			}
		}
		free(buf);
		return (0);
	}
}
