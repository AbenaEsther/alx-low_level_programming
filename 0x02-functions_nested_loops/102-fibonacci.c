#include "main.h"
#include <stdio.h>
/**
  * main - Prints the first 52 fibonacci numbers
  *
  * Return: Nothing!
  */

int main(void)
{
	int count = 3;
	long int first = 1, second = 2;
	long next = first + second;
	printf("%lu, ", first);
	printf("%lu, ", second);
	
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu \n", next);
		}
		else
		{
			printf("%lu, ", next);
		}
		first = second;
		second = next;
		next = first + second;
		count++;
	}
	return (0);
}

