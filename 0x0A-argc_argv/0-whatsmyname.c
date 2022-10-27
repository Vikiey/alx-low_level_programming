#include "main.h"
#include <stdio.h>

/**
 * main - a function that prints its name, followed by a new line
 * @argv: arguments
 * @argc: aargument count
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
