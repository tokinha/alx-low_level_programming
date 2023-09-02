#include <stdio.h>
#include <stdlib.h>

/**
 * main - print sum of 2 numbers
 * @argc: number of commandline arguments
 * @argv: pointer to array
 * Return: 0 - success, nonzero - fail
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		 printf("Error\n");
		 return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

