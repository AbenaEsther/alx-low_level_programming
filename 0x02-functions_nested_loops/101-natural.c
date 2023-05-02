#include "main.h"
/**
  * main - Prints the sum of all multiples of 3 or 5 up to 1024
  *
  * Return: Always (Success)
  */

int main(void)
{
	int sum = 0;
	int i = 1;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf(sum);
	printf('\n');

	return (0);
}

