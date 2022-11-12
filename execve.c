#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	char *newArgv[] = {NULL, "hey", "there", "welcome", NULL};
	char *newEnv[] = {NULL};
	if (argc != 2)
	{
		fprintf(stderr, "usage: %s <filr<\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	newArgv[0] = argv[1];
	execve(argv[1], newArgv, newEnv);
	perror("execve");
	exit (EXIT_SUCCESS);
}
