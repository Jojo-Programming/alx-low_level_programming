#include "main.h"
#include <stdio.h>
/**
 *swap_int - Function that swaps 2 intergers
 *@a: integer to swap
 *@b: integer to swap
 */
void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
