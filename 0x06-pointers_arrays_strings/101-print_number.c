#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */

void print_number(int n)
{
	unsigned int n1;

	n1 = n;

	if (n < 0)
	{	
		n *= -1;
		n1 = n;
		_putchar('-');
		n1 = -n;
	}
	n1 /= 10;
	if (n1 != 0)
	{
		print_number(n1);
	}
	_putchar((n1 % 10) + '0');

}
