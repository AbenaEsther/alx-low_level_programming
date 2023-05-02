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
	int first = 1, second = 2;
	int next = first + second;
	printf("%d\n, ", first);
	printf("%d\n, ", second);
	
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%d\n", next);
		}
		else
		{
			printf("%d\n, ", next);
		}
		first = second;
		second = next;
		next = first + second;
		count++;
	}
	return (0);
}

