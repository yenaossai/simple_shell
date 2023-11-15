#include "shell.h"

#define BUFFER_SIZE 1024

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
