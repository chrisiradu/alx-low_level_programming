#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: if big-endia - 0.
 *         if small-endian - 1.
 *
 */
int get_endianness(void)
{
int num = 1;
char *endian = (char *)&num;

if (*endian == 1)
return(1);

return(0);
}
