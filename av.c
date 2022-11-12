#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - prints all arguments without using argc
 * @argc: input count argument
 * @argv: input array
 * Return: o always
 */
int main(int __attribute__ ((unused)) argc, char **argv)
{
	while (*argv != NULL)
	{
		printf("%s \n" , *argv);
		argv++;
	}
	return (0);
}
