#include "main.h"
#include <stdio.h>

/**
 * print_binary - this prints the binary
 * representation of decimal number
 * @n: decimal number to convert
 * By Jojo-Programming/Mpagi Jolly
 * Return : Always 0
 */
void print_binary(unsigned long int n)
{
if (n > 1)
{
print_binary(n >> 1);
}
(n & 1) ? putchar('1') : putchar('0');
}
