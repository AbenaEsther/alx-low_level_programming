#include"main.h"

/**
 * print_numbers - print 0 - 9
 *             only using _putchar twice
 *
 * Return: Always 0 (Success)
*/

void print_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
		_putchar(num);
	_putchar('\n');
}
