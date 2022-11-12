#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *buffer;
	size_t bufsize = 32;
	//size_t charect;

	buffer = (char *)malloc(bufsize * sizeof(char));
	if (buffer == NULL)
	{
		return (0);
	}
	printf("$ ");
	getline(&buffer, &bufsize, stdin);
        printf("%s",buffer);

	return (0);
}
