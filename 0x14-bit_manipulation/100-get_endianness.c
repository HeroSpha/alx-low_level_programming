#include "main.h"

/**
 * get_endianness - checks endianness of the machine
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
    int num = 1;
    char *byte_ptr = (char *)&num;

    if (*byte_ptr == 1)
        return (1); // little endian
    else
        return (0); // big endian
}
