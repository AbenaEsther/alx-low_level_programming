#include"main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the sum of even-valued
 *		Fibonacci sequence not exceed
 *		4million
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num1 = 0, num2 = 1, sum;
	int total_sum;

	while (1)
	{
		sum = num1 + num2;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			total_sum += sum;
		num1 = num2;
		num2 = sum;
	}
	printf("%d\n", total_sum);

	return (0);
}
