#include "main.h"
#include <stdio.h>
/**
  * main - Prints the first 52 fibonacci numbers
  *
  * Return: Nothing!
  */

int main(void)
{
	int num1 = 1, num2 = 2, i = 3, temp;
	printf("%d\n%d\n", num1, num2);
	for (i = 3; i <= 50; i++)
	{
		temp = num1 + num2;
		printf("%d\n", temp);
		num1 = num2;
		num2 = temp;
	}
	return (0);
}
