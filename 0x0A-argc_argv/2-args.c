#include "main.h"
#include <stdio.h>

/**
 * main - a function that prints all arguements it receives
 * @argc: arguement counter
 * @argv: arguement values
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
