#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return always 0
 */
void print_alphabet_x10(void)
{
int ten;
char la;

for (ten = 0 ; ten <= 9 ; ten++)
{
for (la = 'a' ; la <= 'z' ; la++)
	putchar(la);
putchar('\n');
}
}
