#include "shell.h"

#define BUFFER_SIZE 1024
#define MAX_ARGS 10

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
		
			

		int pid;
			
	pid = fork();
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
					waitpid(pid, NULL, 0);
				}
			}
		}
		free(buf);
		return (0);
	}
}
