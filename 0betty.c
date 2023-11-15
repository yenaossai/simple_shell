#include <unistd.h>

/**
 * main - betty checks
 *
 * Description: prints a greeting message
 *
 * Return: 0 (success)
 */

int main(void)
{
	const char message[] = "Hello, Beautiful Betty!\n";

	write(1, message, sizeof(message) - 1);

	return (0);
}
