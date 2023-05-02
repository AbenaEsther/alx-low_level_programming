#include "main.h"
#include <stdio.h>
/**
  * main - Prints the first 50 fibonacci numbers
  *
  * Return: Anything
  */

int main(void)
{
	int count = 3;
	long int first = 1, second = 2;
	long int next = first + second;

	printf("%lu, ", first);
	printf("%lu, ", second);

	while (count <= 50)
	{
		if (count == 49)
		{
			printf("%lu \n", next);
			break;
		}
		else
		{
			printf("%lu, ", next);
		}
		first = second;
		second = next;
		next = first + second;
		++count;
	}
	return (0);
}

