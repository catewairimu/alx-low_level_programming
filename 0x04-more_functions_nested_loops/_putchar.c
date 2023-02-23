#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: character to  be printed
 *
 * Return:when success 1.
 * when error, -1 is returned, and eror is set appropriately.
 */
int _putchar(char c)
{
 return (write(1, &c, 1));
}
