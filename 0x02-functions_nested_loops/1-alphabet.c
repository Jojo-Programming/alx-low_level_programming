#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - prints all alphabet in lowercase
 *
 * Return: always 0
 */
void print_alphabet(void)
{
char la;

for (la = 'a' ; la <= 'z' ; la++)
putchar(la);
putchar('\n');

}
