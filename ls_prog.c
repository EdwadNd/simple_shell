#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char *buffer;
	size_t bufsize = 32;
	char *arr[5];
	int i = 0;
	//size_t charect;

	buffer = (char *)malloc(bufsize * sizeof(char));
	if (buffer == NULL)
	{
		return (0);
	}
	printf("$ ");
	getline(&buffer, &bufsize, stdin);
        printf("%s",buffer);


	const char s[2] = " ";
	char *token;
	         
	         /* get the first token */
	token = strtok(buffer, s);
	arr[i] = token;
		    
		    /* walk through other tokens */
	while( token != NULL ) 
	{
	printf( " %s\n", token);
	i++;
				      
	token = strtok(NULL, s);
	arr[i] = token;
	}
	i++;
	arr[i] = NULL;
	printf("arr : %s", arr[i - 1]);

	return (0);				   
}
