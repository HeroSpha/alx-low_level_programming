#include "main.h"
#include <stdio.h>

/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to decimal number to change
 * @index: index position of bit to change
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;
	unsigned int shift;

	if (index > 63)
		return (-1);

	shift = index;
	mask = mask << shift;

	if ((*n >> index) & 1)
		*n ^= mask;

	return (1);
}
