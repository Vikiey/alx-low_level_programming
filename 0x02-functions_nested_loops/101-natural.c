#include <stdio.h>
/**
*main - prints count of multiples of 3 or 5 below 1024
*Return: 0
*/

int main(void)
{
	int a, sum = 0;

	for (a = 0; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			sum += a;
	}
	printf("%d\n", sum);
	return (0);
}
