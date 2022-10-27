#include "main.h"
#include <stdio.h>

/**
 * main - a function that prints the number of arguements you passed into it
 * @argc: argument counter
 * @argv: argument values
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
