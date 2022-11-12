#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main(void)
{
	pid_t my_pid;
	pid_t pid;

	printf("before calling fork\n");
	pid = fork();

	if (pid == -1)
	{
		perror("Error:");
		return (1);
	}
	printf("after calling fork\n");
	my_pid = getpid();
	printf("after calling fork, pid is %u\n", pid);
	printf("my pid iss %u\n", my_pid);
	return (0);
}
