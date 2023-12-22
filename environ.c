#include "shell.h"

/**
 * main - prints environment vars
 *
 * Return: 0
 */
int main(void)
{
	int myshell = 0;

	while (environ[myshell])
	{
		write(1, environ[myshell], strlen(environ[myshell]));
		write(1, "\n", 2);
		myshell++;
	}
	return (0);
}
