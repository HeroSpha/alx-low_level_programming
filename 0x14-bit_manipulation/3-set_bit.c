#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @num_ptr: pointer to the decimal number to change
 * @bit_idx: index position of the bit to change, starting from 0
 *
 * Return: 1 if it worked, -1 if an error occurred
 */
int set_bit(unsigned long int *num_ptr, unsigned int bit_idx)
{
	unsigned long int bit_mask;

	if (bit_idx >= sizeof(unsigned long int) * 8)
		return (-1);

	bit_mask = 1UL << bit_idx;
	*num_ptr |= bit_mask;

	return (1);
}
